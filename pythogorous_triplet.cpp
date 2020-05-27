#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    int a[t];
    for(int j=0;j<t;j++)
    cin>>a[j];
    for(int i=0;i<t;i++)
    {
        int b=0;
        int c=(int)sqrt(a[i]);
        cout<<"\n";
        for(;b<=c;b++)
        if(((b*b)+(c*c))==a[i])
        {
        cout<<"("<<b<<","<<c<<")";
        c--;
        }}
    

    return 0;
}