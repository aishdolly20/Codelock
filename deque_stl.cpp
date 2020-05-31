#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	deque<int> d;
    int max,i,j=0;
    int maxarr[n-k+1];
    for(i=0;i<n;i++)
    d.push_back(arr[i]);
    while(d.size()){
        max=d.front();
        for(i=1;i<k;i++){
        if(d[i]>max)
        max=d[i];
        }
        maxarr[j]=max;
        j++;
     d.pop_front();
    }
   for(i=0;i<sizeof(maxarr)/sizeof(maxarr[0]);i++)
   cout<<maxarr[i]<<" "; 
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}