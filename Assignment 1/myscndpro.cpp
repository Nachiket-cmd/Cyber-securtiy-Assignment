#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string check;
    cout<<"Enter the string you want to check : "<<endl;
    cin>>check;
    int l= check.length();
    int flag=1;
    for(int i=0;i<l/2;i++)
    {
        char ch= check.at(i);
        char ch1=check.at(l-i-1);
        if(ch!=ch1)  flag=0;
    }
    if(flag) cout<<"Entered string is Palindrome"<<endl;
    else cout<<"Entered string is not a Palindrome"<<endl;
    return 0;
}
