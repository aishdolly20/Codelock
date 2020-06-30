#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,p=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        p*=a[i];
    }
    int i=1;
    while(true){
        if(pow(i,n)>=p)
        {
            cout<<i<<endl;
            break;
        }
        i++;
    }
    return 0;
}
