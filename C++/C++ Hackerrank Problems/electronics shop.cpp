#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int i,j,n,m,b,k=0;
int kb[1000],usb[1000],sum[10000000];

cin>>b;
cin>>n;
cin>>m;

for( i=0; i<n; i++){ cin>>kb[i];}
for( i=0; i<m; i++){ cin>>usb[i];}

if(n<m){
for(i=0; i<m; i++ ){
    for(j=0; j<m; j++ ){
   sum[k]= kb[i] + usb[j];
   if(sum[k]<= b){k++;}
   }
}
}

else{
for(i=0; i<n; i++ ){
    for(j=0; j<n; j++ ){
   sum[k]= kb[i] + usb[j]; //keep the sum of all values
   if(sum[k]<= b){k++;}    //if sum less than or equal to budget then only update it in array
   }
}
}

int max = sum[0];

for ( i=0; i<k; i++){
if (max < sum[i])
max = sum[i];
}

if(max>b){
cout<< -1;
}
else{
cout <<max;
}

return 0;
}


