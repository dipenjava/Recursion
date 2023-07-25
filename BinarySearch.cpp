#include "iostream"
using namespace std;
bool binarySearch(int *arr,int s,int e,int key)
{
    int mid=s+(e-s)/2;

    if(s>e)
    {
        return false;
    }
    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else
    {
       return binarySearch(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[5]={4,5,6,8,0};
    int s=0;
    int e=5;
    int key = 6;
    bool d=binarySearch(arr,s,e,key);
    if(d)
    {
        cout<<"YES ELEMENT IS PRESENT";

    }
    else
    {
        cout<<"Shutup";
    }
}


















//
// Created by 91919 on 25-07-2023.
//
