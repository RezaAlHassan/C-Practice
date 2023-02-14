#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        string str;
        cin >> str;
        int cnt = 0;
        int len=str.size();
         int i=0, j=len-1;
       while(i<j){
            cnt += abs(str[i]-str[j]);
       i++;
       j--;}

        cout << cnt << endl;

    }
    return 0;
}
