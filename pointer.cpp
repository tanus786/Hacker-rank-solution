#include<iostream>
using namespace std;
#include<math.h>

int main() {
   long int a,b,c,e;
    long int *d,*z;
    d=&a;
    z=&b;
    cin>>*d>>*z;
    c=*d+*z;
    e=*d-*z;
    cout<<c<<endl;
    if(e<0)
    {
        e=sqrt((e*e));
        cout<<e;
    }
    else
    {
        cout<<e;
    }

    return 0;
}

