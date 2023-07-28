#include "iostream"
using namespace std;
bool palindrome(string s,int i,int j)
{
    if(i>j)
    {
        return true;
    }
    if(s[i]!=s[j])
    {
        return false;
    }
    return palindrome(s,i+1,j+1);
}
int main()
{
    string s="abba";
    bool d= palindrome(s,s[0],s.length()-1);
    if(d)
    {
        cout<<"Yes your string is palindrome.";
    }
    else
    {
        cout<<"Not";
    }
}




































//
// Created by 91919 on 26-07-2023.
//
