#include "iostream"
using namespace std;
void bubbleSort(int *arr,int n)
{
    if(n==0 || n==1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
void print(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    int arr[7]={999,85,42,65,2,0,45};
    cout<<"Array before sorting is: "<<endl;
    print(arr,7);
    bubbleSort(arr,7);
    cout<<"Array after sorting: "<<endl;
    print(arr,7);
}












//
// Created by 91919 on 26-07-2023.
//
