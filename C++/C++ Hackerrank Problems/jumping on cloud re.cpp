#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{    int i,n,k,e=100, c[26];
cin>>n >> k;
   for(i=0;i<n;i++){cin>>c[i];}

   while(i!=0){
        i=(i+k)%n;
      if(c[i]==0) {e--;}
       if(c[i]==1) {e=e-3;}

   }


cout<<e;
    return 0;
}
