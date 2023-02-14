#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int g=0; g<n; g++)
    {
        int b,c;
        cin >> b >> c;
        int num=0;
        for (int i=0; i<b; i++)
        {
            int d;
            cin >> d;
            if (d<=0) {num++;}
        }
        if (num>=c)
        {
            cout << "NO" << '\n';
        }
        else cout << "YES" << '\n';
    }
    return 0;
}
