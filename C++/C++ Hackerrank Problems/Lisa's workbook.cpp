#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,i,arr[100],sp=0,pages=1,k;
    cin>>n;

    cin>>k;

    for(i=1; i<=n; i++){
        cin>>arr[i];
    }

    for( i=1; i<=n; i++){

     for( int j=1; j<=arr[i]; j++){
 if(pages==j){sp++;}
 if(j%k==0){pages++;}
     }
      if(arr[i]%k!=0){pages++;}

    }

    cout << sp;

    return 0;
}
