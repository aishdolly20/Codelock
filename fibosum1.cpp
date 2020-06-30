#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long int fib[100001];
void fibonnaci(int m)
{
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2;i<=m;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
}
long long int fibSum(int n,int m)
{
    long long int result = 0;
    for(int i=n;i<=m;i++)
    {
        result+=fib[i];
    }
    return result;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n,m;
    cin>>t;
   
    for(int i=1;i<=t;i++)
    {
        cin>>n>>m;
        fibonnaci(m);
        long long int result = fibSum(n,m);
        cout<<result<<endl;
    }
   
    return 0;
}