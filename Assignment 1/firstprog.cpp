#include<iostream>
#include<sstream>
using namespace std;
int main(int argc, char **argv)
{
    stringstream strobj(argv[1]); // string object is changed to integer object( i.e the integer )
    int totalnum;
    strobj>>totalnum;
    int max=0;
    for(int i=0;i<argc-2;i++)
    {
        stringstream obj(argv[i+2]);
        int no;
        obj>>no;
        if(no>max) max=no;
    }
    cout<<"Answer of this program is : "<<max;// final output ( answer )
    return 0;
} 
