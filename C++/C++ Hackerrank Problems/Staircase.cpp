#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;

    for(i = 0; i < n; i++){
        /* for j th row, first print rows-r spaces then stars */
        for(j = 0; j < n; j++){
            if(j < n-i-1){
                cout<<" ";
            } else {
               cout<<"#";
            }
        }
        /* move to next row */
       cout<<endl;
    }
    return 0;
}
