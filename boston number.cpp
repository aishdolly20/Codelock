#include <iostream>
#include <math.h>
using namespace std;
int boston(int n);
int boston(int n) {
    int sum_numbers=0,sum_factors=0,i,j,r;
    int num=n;
   for (i = 2; i <= sqrt(num); i++){
     while (num%i == 0){
         j=i;
         while(j>0){//to calculate sum of the digits of factors
             r=j%10;
             sum_factors+=r;
             j=j/10;
         }num = num/i;
      }
   }
   if (num > 2){ ////to calculate sum of the digits of largest prime factor remained
       while(num>0){
             r=num%10;
             sum_factors+=r;
             num=num/10;
         }
    }
   while(n>0){   //to calculate sum of the digits of number
       r=n%10;
       sum_numbers+=r;
       n=n/10; }
   if(sum_numbers==sum_factors)
   return 1;
   else
   return 0;
}
int main() {
   int n;
   cin>>n;
   cout<<boston(n);
   return 0;
}