#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int gcd(long long int a,long long int b);
long long int fact(long long int n);
int main() {
   long long int p,q;
    cin>>p>>q;
    cout<<fact(min(p,q));
    return 0;
}

long long int fact(long long int n) { 
   if ((n==0)||(n==1))
   return 1; 
   else
   return n*fact(n-1);
}

