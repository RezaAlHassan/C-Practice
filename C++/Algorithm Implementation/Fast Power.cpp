#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int power(long long a, int b)
{
int x;
    if (b == 0) return 1;

    else if(b%2==0){
            x=power(a,b/2);
    return x*x;
    }

   else{
    x=power(a,b/2);
    return x*x*a;
   }

}


int main(){
long long a;
int b;
cin>>a;
cin>>b;
cout<<power(a,b);
        return 0;
}
