

#include <iostream>

using namespace std;
long long int gcd(long long int,long long int);
int main()
{
    long long int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
long long int gcd(long long int a,long long int b){
    long long int r;
    if(b==0)
    return a;
    r=a%b;
    gcd(b,r);
}  
