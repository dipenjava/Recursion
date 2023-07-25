#include "iostream"
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else
    {bool ans = isSorted(arr+1,size-1);
    return ans;}

}

int main()
{
    int arr[5]={4,5,6,8,0};
    int size=5;
    if(isSorted(arr,size))
    {
        cout<<"Yes Your array is sorted.";
    }
    else
    {
        cout<<"Nope array is not sorted";
    }
}











//
// Created by 91919 on 25-07-2023.
//
