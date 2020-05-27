
#include <iostream>
#include <bits/stdc++.h>
void BinarySearch(long long int a[],long long int b[],int,int);

using namespace std;

int main()
{
    int n,k,i;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>k;
    long long int b[k];
    for(i=0;i<k;i++)
    cin>>b[i];
    BinarySearch(a,b,n,k);

    return 0;
}
void BinarySearch(long long int a[],long long int b[],int n,int k){
    int low,high,mid,i;
    int index[k];
   
    for(i=0;i<k;i++){
       
        low=0;
        high=n-1;
        index[i]=-1;
    while(low<=high){
         mid=(low+high)/2;
       if(b[i]==a[mid]){
           index[i]=mid;
           break;
       }
       else if(b[i]<a[mid])
       high=mid-1;
       else
       low=mid+1;
       
    }
    cout<<index[i]<<" ";
    }
}
