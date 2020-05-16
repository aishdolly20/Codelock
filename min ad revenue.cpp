

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n,i;
   cin>>n;
   long int a[n],b[n],minrevenue=0;
   for(i=0;i<n;i++)
   cin>>a[i];
   for(i=0;i<n;i++)
   cin>>b[i];
   sort(a,a+n);
   sort(b,b+n);
   for(i=0;i<n;i++)
   minrevenue+=a[i]*b[i];
   cout<<minrevenue;
    return 0;
}
