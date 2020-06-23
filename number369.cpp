#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;
bool istrueno(int a){
    string s=to_string(a);
    int n=s.size();
    int x=0,y=0,z=0;
    map<char,int> m;
    for(int i=0;i<n;i++){
        if(s[i]=='3')
        x++;
        else if(s[i]=='6')
            y++;
        else if(s[i]=='9')
            z++;
        
    }
   
   if(x==y&&y==z&&x!=0)
       return true;
    else 
        return false;
}

int main() {
    int a,b,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(istrueno(i))
            count++;
    }
   cout<<count;
    return 0;
}
