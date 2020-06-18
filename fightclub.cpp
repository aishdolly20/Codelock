#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long long int n,count=0;
    cin>>n;
    while(n!=1){
     if(n%2==0){
         n=n/2;
         count+=n;
     } 
        else{
            n=n-1;
            n=n/2;
            count+=n+1;
        }
    }
    cout<<count;
    return 0;
}
