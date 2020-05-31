#include <iostream>
using namespace std;
bool check(int n);
int main()
{
    int n,count=0;;
    bool ans;
    cin>>n;
    for(int i=0;i<=n;i++){
       ans=check(i);
       if(ans==true)
       count++;
    }
    cout<<count;
    return 0;
}
bool check(int n)  
{
    int prev_last = 0; 
     while (n)  
    {
        if ((n & 1) && prev_last) 
            return false; 
        prev_last = n & 1; 
        n >>= 1; 
    } 
  return true; 
} 
