#include "iostream"
using namespace std;
void count(int n)
{
    if(n==0)
        return ;
    count(n-1);
    cout<<n<<"  ";


}
int main()
{
    int n;
    cin>>n;
    count(n);

}




















//
// Created by 91919 on 24-07-2023.
//
