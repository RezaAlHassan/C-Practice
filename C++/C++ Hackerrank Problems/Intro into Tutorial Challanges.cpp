#include<iostream>
using namespace std;

int main() {

    int i,n, V;
    int arr[100];
    cin>>V;
    cin>>n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
 for (i = 0; i < n; i++) {
       if(V==arr[i]){cout<<i;}
 }


    return 0;
}
