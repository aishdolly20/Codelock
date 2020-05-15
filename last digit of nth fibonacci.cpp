

#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
   long long int a[n];
    a[0]=0;
    a[1]=1;
    for(long long int i=2;i<=n;i++)
    a[i]=(a[i-1]%10)+(a[i-2]%10);
    cout<<a[n]%10;
    //cout<<a[n];
    return 0;
}
