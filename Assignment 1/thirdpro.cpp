#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the a and b : ";
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++)  // assuming that a and b is also checked
    {
            count=0;
        for(int j=2;j<=i;j++)
        {
            if(i%j==0) count++;
        }
        if(count==1) cout<<i<<" ";
    }
    return 0;
}
