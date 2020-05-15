#include<stdio.h>
#include<conio.h>
void squareroot();
void powerof();
void factorial();
void log();
void powerof2();
int callog(int,int);
void main(){
int ch;
clrscr();
do{
printf("---------------SCIENTIFIC CALCULATOR----------------\n");
printf("      1. Square root\n");
printf("      2. Power of\n");
printf("      3. Factorial\n");
printf("      4. Power of 2\n");
printf("      5. Log\n");
printf("   Enter your choice(1-5) or enter 6 to exit.... ");
scanf("%d",&ch);
switch(ch){
case 1:
squareroot();
break;
case 2:
powerof();
break;
case 3:
factorial();
break;
case 4:
powerof2();
break;
case 5:
log();
break;
default:
exit(0);
}
}while(ch!=6);
getch();
}
void squareroot(){
int n,i,flag=0;
float j,ans,num;
printf("Enter the no to find its square root ");
scanf("%d",&n);
for(i=1;;i++)
{
if(i*i==n){
ans=i;
flag=1;}
else if(i*i<n&&((i+1)*(i+1)>n)){
num=n;
for(j=(float)i;j<(float)i+1.0;j=j++)
{
if(j*j==num||(j*j<num&&(((j+0.1f)*(j+0.1f))>num))){
ans=j;
flag=1;
break;
}
}
}
if(flag==1) {
printf("Square root of %d = %0.1f\n",n,ans);
break;}
}
}
void powerof(){
int x,y,i;
long ans=1;
printf("Enter the value of x and y so that to find x^y ");
scanf("%d%d",&x,&y);
for(i=0;i<y;i++)
ans*=x;
printf("%d^%d = %ld\n",x,y,ans);
}
void factorial(){
int fact=1,num,i;
printf("Enter the no to find its factorial ");
scanf("%d",&num);
for(i=num;i>=1;i--)
fact=fact*i;
printf("Factorial of %d = %d\n",num,fact);
}
void log(){
int x,y,i;
float ans;
printf("Enter the value of x and y to find log x base y ");
scanf("%d%d",&x,&y);
printf("log %d base %d = %d\n",x,y,callog(x,y));
}
int callog(int x,int y){
return (x>y-1)?1+callog(x/y,y):0;
}
void powerof2(){
int num,i;
long ans=1;
printf("Enter the no to find its power of 2 ");
scanf("%d",&num);
for(i=0;i<num;i++)
ans*=2;
printf("2^%d = %ld\n",num,ans);
}