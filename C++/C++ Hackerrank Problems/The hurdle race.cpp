#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   // Array of 5 floating elements
   int candles[100], i,n,k,count=0;


cin>>n;
cin>>k;


   for(i=0;i<n;i++)
   {
    cin>>candles[i];
   }

    int max = candles[0];
  for(i=0; i<n; i++)
    {   if (candles[i] > max) {
            max = candles[i];
        }}
        //cout<<max<<endl;

if(k>max){ cout<<0;}
      else{
    count=max-k;
    cout<<count;
    }
   return 0;
}
