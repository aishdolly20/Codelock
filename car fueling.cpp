#include <iostream>

using namespace std;
int minrifill(long int x[],int n,int m);
int main()
{
   long int d;
   int m,n,i;
   cin>>d>>m>>n;
   long int x[n+2];
   x[0]=0;
   x[n+1]=d;
   for(i=1;i<=n;i++)
   cin>>x[i];
   cout<<minrifill(x,n,m);
   return 0;
}
int minrifill(long int x[],int n,int m){
    int countrefill=0,currentrifill=0,lastrefill;
    while(currentrifill<=n){
      lastrefill=currentrifill;
      while(currentrifill<=n &&x[currentrifill+1]-x[lastrefill]<=m)
      currentrifill++;
      if(currentrifill==lastrefill)
      return -1;
      if(currentrifill<=n)
      countrefill++;
    }
    return countrefill;
}
