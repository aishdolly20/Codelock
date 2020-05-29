#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,reg,score,max,winner;
    cin>>n;
    map<long long int,long long int> event;
    for(int i=0;i<n;i++){
        cin>>reg;
        cin>>score;
        event[reg]+=score;
    }
      map<long long int, long long int>::iterator itr;
      itr=event.begin();
      max=itr->second;
      winner=itr->first;
    for (itr = event.begin(); itr != event.end(); ++itr) { 
       if(itr->second > max){
       max=itr->second;
       winner=itr->first;
           }
    } 
    cout<<winner;

    return 0;
}
