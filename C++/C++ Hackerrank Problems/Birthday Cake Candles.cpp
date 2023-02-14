#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   // Array of 5 floating elements
   int candles[10000], i,n,count=0;

cin>>n;

if(n<1 || n>pow(10,5)){cout<<endl;}
else{
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
        for(int j=0; j<n; j++)
        {
            /* If duplicate found then increment count by 1 */
            if(max == candles[j])
            {
                count++;

            }
        }
    //}
    cout<<count;}

   return 0;
}
