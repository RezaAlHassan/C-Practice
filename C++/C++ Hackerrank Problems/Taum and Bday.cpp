#include<iostream>
#include <cmath>
#include <cstdio>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {

    long int b,w,wc,bc,z,i,cost1,cost2,cost3,t,newwc,newbc,totalFc;
cin>>t;
   for(i=0; i<t; i++){
    cin>>b>>w>>bc>>wc>>z;

    newwc=bc+z;
    newbc=wc+z;
    totalFc=w+b;
   // if(newwc<wc){
            cost1=(bc*totalFc)+(z*w);
   // if(newbc<bc){
   cost2=(z*b)+(wc*totalFc);
    cost3=(b*bc)+(w*wc);
    long int actualCost= min(min(cost1,cost2),cost3);


    cout<< actualCost <<endl;

   }

    return 0;
}
