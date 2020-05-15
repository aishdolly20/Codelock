#include <iostream>
using namespace std;
int main()
{
    int i,j,k,n,flag;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--)
        cout<<" ";
        j=i;
        flag=0;
        for(k=1;k<=2*i-1;k++){
            cout<<j;
            if(j==1)
            flag=1;
            if(flag==0)
            j--;
            else j++;
             }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=n-1;j>=i;j--)
        cout<<" ";
        j=i;
        flag=0;
        for(k=2*i-1;k>=1;k--){
            cout<<j;
            if(j==1)
            flag=1;
            if(flag==0)
            j--;
            else j++;
            }
        cout<<endl;
    }
   return 0;
}