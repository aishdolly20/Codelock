/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int DPChange(int money,int coins[]);
int main()
{
    int coins[3]={1,3,4};
    int money;
    cin>>money;
    int min=DPChange(money,coins);
    cout<<min;
    return 0;
}
int DPChange(int money,int coins[]){
    int mincoins[money],numcoins;
    mincoins[0]=0;
    for(int i=1;i<=money;i++){
        mincoins[i]=9999;
        for(int j=0;j<3;j++){
            if(i>=coins[j]){
               numcoins=mincoins[i-coins[j]]+1;
               if(numcoins<mincoins[i])
               mincoins[i]=numcoins;
            }
        }
    }
    return mincoins[money];

}
