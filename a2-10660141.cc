#include <iostream>
#include<cmath>
using namespace std;
 int main()
{
   int n,i;
   int c=1;
   cout <<"Enter any positive number: ";
   cin >>n;
   for(i=2;i<n-1;i++)
   { 
     
      if(n%i!=0)
      {
         continue;
      }
      else
      {
         c=0;
      }
  }
  if(c==0)
  {
      cout<<"Number is not a prime number";
  
  }
  else
  {
      cout<<"Number is a prime number";
  }
  return 0;
}
