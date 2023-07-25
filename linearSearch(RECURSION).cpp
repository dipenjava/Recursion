#include "iostream"
using namespace std;
bool linearSearch(int *arr,int size,int key)
{
    if(size==0)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return true;
    }
    else {
        int rem = linearSearch(arr + 1, size - 1, key);
        return rem;
    }

}
int main()
{
    int arr[5]={4,5,6,8,0};
    int size=5;
    int key = 999;
    bool d=linearSearch(arr,size,key);
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
