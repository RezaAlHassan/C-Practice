#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t, a, b;
    cin >> t;
    for(int i=1; i<=t; t++) {
        cin >> a;
        cin >> b;
        int f=floor(sqrt(b));
        int j=ceil(sqrt(a));
        // to find number of digits between a given range, a to b
        // we do b - a + 1
        // similarly to find the number of squares between a range
        // we do sqrt(b) - sqrt(a) + 1
        cout << f - j + 1 << endl;

    }
    return 0;
}
