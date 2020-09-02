#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void encrypt(string to_check)
{
    int len=to_check.length();
    string encrypt="";
for(int i=0;i<len;i++)
    {
        int a=(int) to_check.at(i);
        int c=a;
        a+=5;
        if(a>122 and c>=97 and c<=122) a-=26;
        if(a>90 and c>=65 and c<=90) a-=26;
        encrypt+=(char)a;
    }
    cout<<encrypt<<endl;
}
void decrypt(string to_check)
{
    int len=to_check.length();
    string decrypt="";
for(int i=0;i<len;i++)
    {
        int a=(int) to_check.at(i);
        int c=a;
        a-=5;
        if(a<97 and c>=97 and c<=122) a+=26;
        if(a<65 and c>=65 and c<=90) a+=26;
        decrypt+=(char)a;
    }
    cout<<decrypt<<endl;
}
int main()
{
    string inputstr;
    char choise;
    cin>>choise;
    switch(choise)
    {
        case 'E':
            cin>>inputstr;
            encrypt(inputstr);
            break;
        case 'D':
            cin>>inputstr;
            decrypt(inputstr);
            break;
        default:
            cout<<"INVALID CHOISE"<<endl;

    }
    return 0;
}
