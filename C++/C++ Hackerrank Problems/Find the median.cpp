#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i;
    int arr[100000];
    cin>>n;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
     sort(arr, arr + n);
    int median1 =n+1;
    int median2 = median1/2;

    cout<< arr[median2-1] ;

    return 0;
}
