#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string to_Check;
    cin>>to_Check;
    int len=to_Check.length();
    string str="";
for(int i=0;i<len;i++)
    {
        char ch=to_Check.at(i);
        int intch=(int) ch;
        
        if(intch>=65 and intch<=90)
        {
            intch-=64;
            if(i%2==0)
            {
	for(int j=0;i<intch;j++)
                {
                    str+='#';
                }

            }
            else
	for(int j=0;i<intch;j++)
                {
                    str+='$';
                }            


        }
        if(intch>=97 and intch<=122)
        {
            intch-=96;
            if(i%2==0)
            {
	for(int j=0;i<intch;j++)
                {
                    str+='#';
                }

            }
            else
		for(int j=0;i<intch;j++)
                {
                    str+='$';
                }
            
        }
    }
    cout<<str;
    return 0;
}
