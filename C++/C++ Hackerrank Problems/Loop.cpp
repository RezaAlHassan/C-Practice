#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int d,n,m,i,j,lb[10000000],scores[10000000],rankArr[100000000] ;


    cin>>n>>m;

    for(i=0,; i<n; i++){
            cin>>lb[i];
            if (lb[i] == lb[i+1]){
                    //d++;
                    //remove duplicate here to make the rest correct
                    //make another array lb array without duplicates to solve this problem
                    //fix index too

            }
    }
    int rank=n+1; //increaser by 1 as player enters board
    for(i=0,; i<m; i++){ cin>>pr[i]; }
     //c = floor(1000*c)/1000; // 3 digits after decimal points
     //e = floor(1000000*e)/1000000;
     for(i=0; i<n; i++){ //descending order
         for(j=0; j<m; j++){
            if(scores[j]>lb[i]){
                    rank--;
                    rankArr[j]=rank;

            }
             if(scores[j]==lb[i]){

                    rankArr[j]=i;

            }
         }
     }


    return 0;

}
