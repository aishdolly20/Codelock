#include <iostream>

using namespace std;
int gcd(int a,int b);
int main()
{    
     int t;
     cin>>t;
     for(int i=0;i<t;i++){
     int a,b;
     cin>>a>>b; 
     int lcm=(a*b/gcd(a,b));
     cout<<(lcm/a)*(lcm/b)<<" ";
    }
    return 0;
}
int gcd(int a,int b){
    int r;
    if(b==0)
    return a;
    r=a%b;
    gcd(b,r);
}
