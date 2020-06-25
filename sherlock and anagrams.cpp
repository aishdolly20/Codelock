#include <bits/stdc++.h>

using namespace std;

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
int n=s.size();
int ans=0;
map<string,int> m;
for(int i=1;i<n;i++){
    for(int j=0;j<=n-i;j++){
    string str=s.substr(j,i);
    sort(str.begin(),str.end());
    m[str]++;

    }
}
for(auto itr:m){
    if(itr.second>1){
    ans+=itr.second*(itr.second-1)/2;
    }
}
return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = sherlockAndAnagrams(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
