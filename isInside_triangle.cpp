#include <bits/stdc++.h> 
using namespace std; 
float area(int x1, int y1, int x2, int y2, int x3, int y3) 
{ 
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0); 
} 
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y) 
{    
   // Calculate area of triangle ABC 
   float A = area (x1, y1, x2, y2, x3, y3); 
  
   //Calculate area of triangle PBC    
   float A1 = area (x, y, x2, y2, x3, y3); 
  
   // Calculate area of triangle PAC   
   float A2 = area (x1, y1, x, y, x3, y3); 
  
   // Calculate area of triangle PAB  
   float A3 = area (x1, y1, x2, y2, x, y); 
    
   // Check if sum of A1, A2 and A3 is same as A 
   return (A == A1 + A2 + A3); 
} 
  

int main() 
{ 
  int x1,y1,x2,y2,x3,y3,x4,y4;
  cin>>x1>>y1;
  cin>>x2>>y2;
  cin>>x3>>y3;
  cin>>x4>>y4;
   if (isInside(x1, y1, x2, y2, x3, y3, x4, y4)) 
     printf ("Caught"); 
   else
     printf ("Not Caught"); 
    return 0; 
} 