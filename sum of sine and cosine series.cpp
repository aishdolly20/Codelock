#include <iostream>
#include <math.h>
using namespace std;
long factorial(long);
void compute_sine();
void compute_cosine();

int main()
{   
    int ch;
    cout<<"Enter 1- to compute sum of sine series"<<endl;
    cout<<"      2- to compute sum of cosine series"<<endl;
    cin>>ch;
    if(ch==1)
    compute_sine();
    else if(ch==2)
    compute_cosine();
    return 0;
}
void compute_sine(){
    int deg,exponent,i,n;
    float rad,deno,num,result;
    n=11;
    result=0.0;
    cout<<"Enter the degree ";
    cin>>deg;
    rad=deg*3.14/180;
    for( i = 0;i< n;i++) {
    exponent = (2 * i) + 1;
    num = pow(rad,exponent);
    deno = factorial(exponent);
    result = result + ((num* pow(-1,i))/deno);}
    cout << "Sin " << deg << " = "<<result << endl;

}
void compute_cosine(){
    int deg,exponent,i,n;
    float rad,deno,num,result;
    n=11;
    result=0.0;
    cout<<"Enter the degree ";
    cin>>deg;
    rad=deg*3.14/180;
    for( i = 0;i< n;i++) {
    exponent = (2 * i);
    num = pow(rad,exponent);
    deno = factorial(exponent);
    result = result + ((num * pow(-1,i))/deno);}
    cout << "Cos " << deg << "=" << result << endl;


}
long factorial(long n){
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}