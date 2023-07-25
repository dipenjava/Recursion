#include "iostream"
using namespace std;
int twotwo(int n) {
    if (n == 0)
        return 1;
    int o = 2 * twotwo(n-1);
    return o;
}

int main()
{
    int n;
    cin>>n;
    int d= twotwo(n);
    cout<<d<<endl;
}
































//
// Created by 91919 on 24-07-2023.
//
