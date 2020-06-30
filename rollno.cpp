#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int high[n];
    high[0]=s[0];
    for(int i=1;i<n;i++)
    {
        high[i]=s[i]+high[i-1];
    }
    int q;
    cin>>q;
    while(q!=0){
        int rollno;
        cin>>rollno;
        for(int i=0;i<n;i++){
            if(rollno<=high[i]){
                cout<<i+1<<endl;
                break;
            }
        }
        q--;
    }
    return 0;
}
