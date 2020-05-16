#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
   long long int n,sum=0,count=0;
   cin>>n;
   vector<int> numbers;
   while(sum!=n){
       count++;
       if(sum+count>n){
           numbers.pop_back();
           count--;
           sum=sum-count;
       }
       else{
    numbers.push_back(count);
    sum+=count;
       }
   }
   cout<<numbers.size()<<endl;
   
   for(int i=0;i<numbers.size();i++)
   cout<<numbers[i]<<" ";

    return 0;
}
