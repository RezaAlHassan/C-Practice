#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,wrapperRemainder,newchoco,choco,money,cost,wrapperCost,wrappers;

    cin>>t;
    while(t--) {
    cin >> money>>cost>>wrapperCost;

   choco=money/cost;
  wrappers=choco;
  while(wrappers>=wrapperCost){
    newchoco=wrappers/wrapperCost;
    choco=choco+newchoco;
    //wrapper=newchoco;
    wrapperRemainder=wrappers%wrapperCost;
    wrappers=newchoco+wrapperRemainder;
  }

 cout<<choco<<endl;
    }
    return 0;
}
