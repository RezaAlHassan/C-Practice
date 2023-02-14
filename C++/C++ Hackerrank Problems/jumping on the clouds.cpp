#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{    int i,n,jumps=0, c[100];
cin>>n ;
   for(i=0;i<n;i++){cin>>c[i];}

    for(i=0;i<n;i++){
      if(c[i]==0 ) {jumps++;}
       //if((c[i]==c[i+1]) &&(c[i]==0) ) {jumps--;}
       if((c[i]==0) && (c[i+1]==0) && (c[i+2]==0)) {jumps--;}
   }

    cout<<jumps-1;
    return 0;
}
