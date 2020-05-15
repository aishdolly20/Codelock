/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{  
    int num,i,j,temp[50];
    int result=0;
    cin>>num;
    for(i=0;num>0;i++){
        temp[i]=num%2;
        num=num/2;
    }
    for(j=i;j<=31;j++)
    temp[j]=0;
    for(j=0;j<=31;j++){
        if(temp[j]==1)
        result+=pow(2,(31-j));
    }
    cout<<result;
    return 0;
}
