#include<iostream>
#include<vector>
using namespace std;
int minimumCoins(int n)
{
  int sum;
  vector<int> coins;
  for(int i=1;i<=n;i++)
  {
    sum = 0;
    if(coins.empty())
    {
      coins.push_back(i);
      continue;
    }
    for(auto j:coins)
    {
      sum += j;
      if(sum == i)
      {
        continue;
      }
    }
    if(sum < i)
    {
      coins.push_back(i);
    }
  }
  return coins.size();
}
int main()
{
  int t,n;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    cin>>n;
    int result = minimumCoins(n);
    cout<<result<<endl;
  }
  return 0;
}