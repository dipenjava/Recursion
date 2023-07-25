#include "iostream"
using namespace std;
int fibo(int n)
{
   ;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    int ans= fibo(n-1)+fibo(n-2);
    //cout<<n<<"  ";
    return ans;




}
int main()
{
    int n;
    cin>>n;
    int d= fibo(n);
    cout<<endl<<"th element is: "<<d<<" ";

}




















//
// Created by 91919 on 24-07-2023.
//














//
// Created by 91919 on 24-07-2023.
//
