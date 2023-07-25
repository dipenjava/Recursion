#include "iostream"
using namespace std;
int stairs(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    return stairs(n-1)+stairs(n-2);
}
int main()
{
    cout<<"Enter number of stairs to climb: ";
    int n;
    cin>>n;
    int yes=stairs(n);
    cout<<"Number of ways to climb is: "<<yes;
}

































//
// Created by 91919 on 24-07-2023.
//
