#include<iostream>
using namespace std;

int main() {

    int i, j, n, v = 1,count=0
    ;
    int arr[100];

    cout << "Enter size of an array:";
    cin>>n;
    cout << "Enter array elements:";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate elements:";
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {

               count++;
            }
        }

    }

cout<<count;
    return 0;
}
