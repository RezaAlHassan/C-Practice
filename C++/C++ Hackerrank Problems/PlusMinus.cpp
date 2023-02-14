#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int n, arr[1000],sum=0;

double count1=0,count2=0, count3=0;
cin>>n;

for(int i=0; i<n; i++){ cin>>arr[i];}


for(int j=0; j<n; j++){

        if(arr[j]<0){count1++; }
      else if(arr[j]>0){count2++;}
      else{count3++;}
}

double posRatio= count2/n;
double negRatio= count1/n;
double zeroRatio= count3/n;

        cout<< fixed << setprecision(6)<< posRatio<<endl;//n<<endl;
        cout<< fixed << setprecision(6)<< negRatio<<endl;//n<<endl;
        cout<< fixed << setprecision(6)<<zeroRatio;//n<<endl;
return 0;
}
