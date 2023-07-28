#include "iostream"
using namespace std;
int power(int n, int m)
{
    if(m==0)
    {
        return 1;
    }
    if (m==1)
    {
        return n;
    }
    int ans= power(n,m/2);
    if(m&1)
    {
        return n*ans*ans;
    }
    else
    {
        return ans*ans;
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    int d=power(n,m);
    cout<<"Power is: "<<d;

}

































//
// Created by 91919 on 26-07-2023.
//
