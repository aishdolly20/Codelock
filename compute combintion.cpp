#include <iostream>
using namespace std;
long factorial(long);

int main()
{
    long n,r;
    cout<<"Enter the value of n and r respectively to compute C(n,r)"<<endl;
    cin>>n>>r;
    cout<<"C("<<n<<","<<r<<") = "<<factorial(n)/(factorial(r)*factorial(n-r));
    return 0;
}
long factorial(long n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}