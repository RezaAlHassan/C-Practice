#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{    int count=0;
     string word;
     cin>>word;
     int length= word.size();

     for(int i=0; i<length; i++){
 if(word[i]>=65 && word[i]<=90){count++;}

 }




     cout<<count+1;


    return 0;
}
