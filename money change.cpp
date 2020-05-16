

#include <iostream>

using namespace std;

int main()
{
    int m,count=0;
    cin>>m;
    if(m/10>0){
       count+=m/10;
       m=m%10;
    }
    if(m/5>0){
        count+=m/5;
        m=m%5;
    }
    if(m/1>0){
        count+=m/1;
    }
    cout<<count;
    return 0;
}
