#include <bits/stdc++.h>

using namespace std;
long L[5000+1][5000+1];
// Complete the commonChild function below.
long commonChild(string s1, string s2) {
int n=s1.length();
int m=s2.length();

for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        if(i==0||j==0)
        L[i][j]=0;
        else if(s1[i-1]==s2[j-1])
        L[i][j]=L[i-1][j-1]+1;
        else
        L[i][j]=max(L[i][j-1],L[i-1][j]);
    }
}
return L[n][m];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    long result = commonChild(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
