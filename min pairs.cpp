#include <iostream>
using namespace std;
long factorial(long);
int combination(int,int);
int main()
{
    int groups[100],n,k,i,sum=0;
    cin>>n>>k;
    for (i=0;i<k;i++)
    groups[i]=n/k;
    for(i=0;i<n%k;i++)
    groups[i]+=1;
    for(i=0;i<k;i++)
    sum+=combination(groups[i],2);
    cout<<sum;
    return 0;
}
int combination(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
long factorial(long n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}