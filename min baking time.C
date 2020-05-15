#include<stdio.h>
#include<conio.h>
void main()
{
int p,l,r[50],i,j,time;
static int num[50],next_duration[50];
clrscr();
printf("Enter the no of pizza to order ");
scanf("%d",&p);
printf("Enter the no of stalls ");
scanf("%d",&l);
printf("Enter the rank of each stall\n");
for(i=0;i<l;i++)
scanf("%d",&r[i]);
j=0;
time=0;
while(j<p)
{
time++;
for(i=0;i<l;i++)
{
if(time>=r[i]+next_duration[i])
{
j++; //represents how many pizzas are baked
num[i]++; //represents no of pizza baked by a particular stall till time
next_duration[i]=next_duration[i]+r[i]*(num[i]+1);   //represents next required time
}
}
}
printf("Minimum time = %d",time);
getch();
}