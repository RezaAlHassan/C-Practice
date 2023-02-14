#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

        string str;
        cin >> str;
        int cnt = 0;
        for(int i = 0; i < str.size(); i=i+3){
            if(str[i] != 'S' ){cnt++;}
            if(str[i+1] != 'O' ){cnt++;}
             if(str[i+2] != 'S' ){cnt++;}
        }
        cout << cnt << endl;

    return 0;
}
