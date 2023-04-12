#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a,b,gcd;
    int hcf(int a,int b);

    cout<<"\n type in any 2 number: ";
    cin>>a>>b;

    gcd=hcf(a,b);

    cout<<"\n GCD of "<<a<<"and "<<b<<" is : "<<gcd;
}

int hcf(int p, int q)
{
    int r,factor;
    r=p-(p/q*q);

    if(r==0)
        return(q);
    else hcf(q,r);
}