/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  long int n,l=0,s=0;
  cin>>n;
  long int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
      if(a[i]>l){
       s=l;
       l=a[i];   
      }
       else if (a[i] > s) 
            s = a[i]; 
      
  }
 cout<<l*s;
 
  
 

    return 0;
}
