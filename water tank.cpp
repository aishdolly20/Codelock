#include <iostream>
using namespace std;
int water(int[100],int,int);
int main()
{   int i,n,a[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
   cout<<water(a,0,n-1);
    return 0;
}
int water(int a[100],int first,int last){
    int highest,second_highest,i,j,count,sum;
    static int ans=0;
    if(first<last){
          if(a[first]<a[first+1]){ 
               highest = first+1;
               second_highest= first; }
          else{ 
                highest = first;
                second_highest = first+1;}
          for(i=first+1;i<=last;i++) {
             if(a[i]>a[highest]){
                 second_highest=highest;
                 highest=i;}
             else if(a[i]>a[second_highest])
                 second_highest=i; }
          if(highest<second_highest){
              count=0;sum=0;
              for(j=highest+1;j<=second_highest-1;j++){
                 count++;
                 sum+=a[j];}
                 ans=ans+(count*a[second_highest]-sum);
                 water(a,second_highest,last);
                 water(a,first,highest);}
          else if(second_highest<highest){
              count=0;sum=0;
              for(j=second_highest+1;j<=highest-1;j++){
                  count++;
                  sum+=a[j];}
                  ans=ans+(count*a[second_highest]-sum);
                  water(a,highest,last);
                  water(a,first,second_highest);}
     }
    return ans;}

