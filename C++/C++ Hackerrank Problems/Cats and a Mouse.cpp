#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int t,x,y,z,distA, distB;

cin>>t;
while (t--){
cin>>x;
cin>>y;
cin>>z;

distA=x-z;

distB=y-z;
if(distA<0 ){distA=-distA; }
if(distB<0){distB=-distB; }

    if(distA<distB){cout<<"Cat A"<<endl;}
    if(distA>distB){cout<<"Cat B"<<endl;}
    if(distA==distB){cout<<"Mouse C"<<endl;}

}

}
