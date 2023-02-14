#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int d,n,k,m,i,c,lb[20005],scores[20005],rankArr[20006] ;


    cin>>n;
    for(i=0; i<n; i++){cin>>lb[i];}

    cin>>m;
    for(i=0; i<m; i++){cin>>scores[i];}

int j = 0;

    // traverse elements of arr
    for (i = 0; i < n-1; i++)
    {
        // if ith element is not equal to (i+1)th element, then store ith value in arr[j]
        if (lb[i] != lb[i+1])
        {
            lb[j] = lb[i];
            j++;
        }
        if (lb[i] == lb[i+1]){c++;}

    }
      // store last value of arr in arr[j]
    lb[j++] = lb[n-1];


    int rank=n-c+1; //increaser by 1 as player enters board
    int players=n+1;
    if(n>m) {
     for(i=1; i<=players; i++){ //descending order
         for(j=1; j<=m; j++){
            if(scores[j]>lb[i]){
                    rank--;
                    rankArr[j]=rank;


            }
             if(scores[j]==lb[i]){

                    rankArr[j]=i;
            }
         }
     }
    }

      for(i=0; i<players; i++){
            cout<<rankArr[i]<<endl;}

    return 0;

}
