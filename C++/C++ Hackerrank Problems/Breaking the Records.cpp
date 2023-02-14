#include<stdio.h>
#include<iostream>
#include <math.h>
using namespace std;
int main()
{
   int record[1],scores[10000],i,n,count1=0,count2=0;
cin>>n;
   for(i=0;i<n;i++)
   {
    cin>>scores[i];
   }

    int max = scores[0];
    int min = scores[0];
  for(i=0; i<n; i++)
    {   if (scores[i] > max) {
            max = scores[i];
            count1++;
        }
       if (scores[i] < min) {
            min = scores[i];
            count2++;
        }
        }
        record[0]=count1;
        record[1]=count2;
cout<<record[0]<< " "<<record[1]<< endl;

   return 0;
}
