#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   // Array of 5 floating elements
   long ar[10], sum=0;
   int i,n;


cin>>n;
   //  take 5 number
   for(i=0;i<n;i++)
   {
    cin>>ar[i];
   }

   // add that 5 number
   for(i=0;i<n;i++)
   {
     sum += ar[i]; //sum=sum+arr[i]
   }

  cout<<sum;
   return 0;
}
