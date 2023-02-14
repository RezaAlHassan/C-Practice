#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int n,i, j, maxfq=0, count, arr[50],maximumcount = 0;
 cin>>n;
     for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i< n; i++)
    {
        count = 1;
        for(j = i+1; j < n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;

                if(count > maximumcount)
                {
                    maxfq = arr[j];
                }
            }
        }


    }
if(maxfq<=5 && maxfq>0 ){
    cout<<maxfq;}

}
