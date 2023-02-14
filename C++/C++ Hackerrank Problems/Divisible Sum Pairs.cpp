#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int n,k, ar[100],sum=0,count=0;

cin>>n;
cin>>k;
for(int i=0; i<n; i++){ cin>>ar[i];}

for(int i=0; i<n; i++){

for(int j=i+1; j<n; j++){

        sum=ar[i]+ar[j];
        if(sum%k==0){count++;}
        }


}
cout<<count;
}
