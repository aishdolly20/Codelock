/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
int main()
{
	//Write code here
	int i,flag=1;
	unsigned long int n,count=0;
	cin>>n;
	unsigned long int r[n],p[n];
	for(i=0;i<n;i++)
	cin>>r[i];
	for(i=0;i<n;i++)
	cin>>p[i];
	while(1){
    for(i=0;i<n;i++){
        if(p[i]>=r[i])
		p[i]=p[i]-r[i];
		else
		flag=0;
        }
        if(flag==0)
        break;
        count++;
	}
	cout<<count<<endl;
	return 0;
}
