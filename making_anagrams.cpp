#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
int f1[26]={0};
int f2[26]={0};
int c=0;
for(int i=0;i<a.size();i++){
f1[a[i]-'a']++;
}
for(int i=0;i<b.size();i++)
f2[b[i]-'a']++;
for(int i=0;i<26;i++){
c+=min(f1[i],f2[i]);
}

return ((a.size()+b.size())-(c*2));
}

int main()
{
    string a,b;
    cin>>a>>b;

    int res = makeAnagram(a, b);

    cout << res << "\n";

   

    return 0;
}
