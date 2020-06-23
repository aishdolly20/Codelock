#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


unsigned int countSetBits(unsigned int n) 
{ 
    unsigned int count = 0; 
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
} 
  
int main() 
{   int q;
 cin>>q;
 while(q!=0){
    int a,b,sum=0;
     cin>>a>>b;
     for(int i=a;i<=b;i++)
     sum+= countSetBits(i);
     cout<<sum<<endl;
     q--;
 }
 
    return 0; 
} 
