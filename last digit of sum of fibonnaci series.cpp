#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n,sum;
    cin>>n;
   unsigned long long int a[n];
    a[0]=0;
    a[1]=1;
    sum=1;
    for(unsigned long long int i=2;i<=n;i++){
    a[i]=a[i-1]+a[i-2];
    sum+=a[i]%10;
    }
    cout<<sum%10;
    //cout<<a[n];
    return 0;
}
