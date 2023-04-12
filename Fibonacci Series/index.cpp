#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    void fib(int n);

    cout<<"number of terms to be generated ?\n";
    cin>>n;
    cout<<"\n\nFibonacci sequence upto "<<n<<"terms: \n\n";

    fib(n);
}

void fib(int n)
{
    static int f1=0,f2=1;
    int temp;

    if(n<2)
    {
        f1=0;
        f2=1;
    }
    else
    {
        fib(n-1);
        temp=f2;
        f2=f1+f2;
        f1=temp;
    }

    cout<<f1<<" ";

    return;
}