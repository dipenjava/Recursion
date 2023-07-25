#include "iostream"
using namespace std;
int sumofarray(int arr[],int size)
{
    if(size<=0 )
    {
        return 0;
    }
    int ans= sumofarray(arr,size-1)+arr[size-1];
    return ans;

}

int main()
{
    int arr[5]={4,5,6,8,0};
    int size=5;
    cout<<"Sum of array is: "<<sumofarray(arr,size);
}

























//
// Created by 91919 on 25-07-2023.
//
