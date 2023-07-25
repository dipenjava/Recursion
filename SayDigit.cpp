#include "iostream"
using namespace std;
void SayDigit(int n, string args[])
{
    if(n==0)
        return;
    int digit=n%10;
    n/=10;

    SayDigit(n,args);
    cout<<args[digit]<<"  ";
}
int main()
{
    string arg[10]={"zero","one","two","three","four","five","six", "seven","eight","nine"};
    int n;
    cout<<"Please Enter a number: ";
    cin>>n;
    SayDigit(n,arg);
}













//
// Created by 91919 on 24-07-2023.
//
