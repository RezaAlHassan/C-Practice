#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

long long int i,j;
long long int arr[10000],sums[4];

for( i=0; i<5; i++){ cin>>arr[i];}

for( i=0; i<5; i++){
 long long int indsum=0;
for(int j=0;j<5; j++ ){
indsum=indsum+arr[j]; }
sums[i]=indsum-arr[i];
}

long long int max = sums[0];
long long int min = sums[0];

for ( i=0; i<5; i++){
if (max < sums[i])
max = sums[i];
if (min > sums[i])
min =sums[i];
}
cout <<min<< " " << max;

return 0;
}
