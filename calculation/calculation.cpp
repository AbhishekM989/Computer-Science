#include<iostream>
// #include<math.h>
#include<conio.h>
using namespace std;

int main()
{
    int count,n;
    float x,y;

    cout<<"\n enter x & n:";
    cin>>x>>n;

    y=1.0;
    count=1;

    while(count<=n)
    {
        y=y*x;
        count++;
    }

    cout<<"\n x="<<x<<" n="<<n<<" X to the power n="<<y;
}
