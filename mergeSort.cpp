#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[s + i];
    }
    int k = mid + 1;
    for (int j = 0; j < len2; j++)
    {
        arr2[j] = arr[k + j];
    }

    int i = 0, j = 0;
    int idx = s; // Use a separate variable to keep track of the index while merging
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[idx++] = arr1[i++];
        }
        else
        {
            arr[idx++] = arr2[j++];
        }
    }

    // Copy any remaining elements of arr1 and arr2
    while (i < len1)
    {
        arr[idx++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[idx++] = arr2[j++];
    }

    // Don't forget to deallocate memory allocated for arr1 and arr2
    delete[] arr1;
    delete[] arr2;
}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[9] = {8, 9, 2, 45, 85, 455, 0, 9666, 75};
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    mergesort(arr, 0, 8);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}
