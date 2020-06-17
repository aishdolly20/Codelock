#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;


int main() {
    long int n,i;
    cin>>n;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    string s[n];
    map <string,int> a1;
    map <string,int> a2;
    for(i=0;i<n;i++)
        cin>>s[i];
    long int len1=s1.length();
    for(i=0;i<len1-1;i++){
       string temp=s1.substr (i,2);
        a1[temp]++;
    }
    long int len2=s2.length();
    for(i=0;i<len2-1;i++){
       string temp=s2.substr (i,2);
        a2[temp]++;
    }
    for(i=0;i<n;i++){
        if(a1[s[i]]==a2[s[i]])
            cout<<"YES";
        else
            cout<<"NO";
        cout<<endl;
    }
    return 0;
}