

#include <iostream>

using namespace std;
void quickSort(long long int arr[], long int low,long int high);
void partition(long long int a[], long int low,long int high,long int &i, long int &j) ;
void swap(long long int* a, long long int* b);
int main()
{
    long int n;
    cin>>n;
    long long int arr[n];
    for(long int i=0;i<n;i++)
    cin>>arr[i];
    quickSort(arr,0,n-1);
    for(long int i=0;i<n;i++)
    cout<<arr[i]<<" "; 
    return 0;
}
void quickSort(long long int arr[], long int low,long int high)
{   long int i,j;
    if (low < high)
    {
        partition(arr, low, high,i,j);
        quickSort(arr, low, i);  
        quickSort(arr, j, high); 
    }
}
void partition(long long int a[], long int low,long int high,long int &i, long int &j) 
{ 
    // To handle 2 elements 
    if (high - low <= 1) 
    { 
        if (a[high] < a[low]) 
            swap(&a[high], &a[low]); 
        i = low; 
        j = high; 
        return; 
    } 
  
   long int mid = low; 
   long long int pivot = a[high]; 
    while (mid <= high) 
    { 
        if (a[mid]<pivot) 
            swap(&a[low++], &a[mid++]); 
        else if (a[mid]==pivot) 
            mid++; 
        else if (a[mid]>pivot) 
            swap(&a[mid], &a[high--]); 
    } 
  
    //update i and j 
    i = low-1; 
    j = mid; //or high-1 
} 
void swap(long long int* a, long long int* b) 
{ 
  long long int t = *a; 
    *a = *b; 
    *b = t; 
} 
  