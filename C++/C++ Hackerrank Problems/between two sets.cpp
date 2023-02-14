#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{    int i,j,n,m,c,flag1=0,flag2=0,C=0, a[100],b[100], factors1[100],factors2[100] ;
cin>>n >> m;
   for(i=0;i<n;i++){cin>>a[i];}
   for(i=0;i<m;i++){cin>>b[i];}


   int b2= b[m-1];


   for(i=1;i<=b2;i++){
        for(j=1;j<=n;j++){
        if(i%a[j]==0){
       // c++; //checking if integers have factors of values from array a
        factors1[j]=i;  //highest n elements
        //if(c==n){flag1=1;}  //if the integer has factors from all numbers from array a then flag
        //c=0;
        }
        }

        for(j=1;j<=m;j++){
        if(b[j]%i==0){
        //c++;
        factors2[j]=i; //highest m elements
        //if(c==m){flag2=1;}
        //c=0;
        }
        }
   }

   if(n>=m){
      for(i=0;i<n;i++){
        for(j=0;j<m;j++){
   if(factors1[i]==factors2[j]){c++;}
   }
      }
   }

       if(n<m){
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
   if(factors2[i]==factors1[j]){c++;}
   }
      }
       }

cout<<c;
    return 0;
}
