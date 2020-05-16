

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void heapSort(double arr[],long int n,double v[],double w[]);
void heapify(double arr[], long int n, long int i,double v[],double w[]);
void heapify(double arr[], long int n,long int i,double v[],double w[]) 
{ 
    long int largest = i;  
    long int l = 2 * i + 1;  
    long int r = 2 * i + 2; 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
    if (largest != i) { 
        swap(arr[i], arr[largest]); 
        swap(v[i],v[largest]);
        swap(w[i],w[largest]);
        heapify(arr, n, largest,v,w); 
    } 
} 
  
void heapSort(double arr[], long int n,double v[],double w[]) 
{ 
    for (long int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i,v,w); 
    for (long int i = n - 1; i >= 0; i--) { 
        swap(arr[0], arr[i]); 
        swap(v[0],v[i]);
        swap(w[0],w[i]);
        heapify(arr, i, 0,v,w); 
    } 
} 

int main()
{
    long int n,i;
    double W,a,V=0;
    cin>>n>>W;
    double w[n],v[n],u[n];
    for(i=0;i<n;i++){
    cin>>v[i]>>w[i];
    u[i]=v[i]/w[i];
    }
    heapSort(u,n,v,w);
    i=n-1;
    while(W>0){
     a=min(w[i],W);
     V=V+a*u[i];
     W=W-a;
     i--;
    }
    cout<<fixed<<setprecision(4)<<V;
    
    return 0;
}
