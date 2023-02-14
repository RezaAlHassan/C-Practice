#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;


int main()
{    int i, letters[25];
   for(i=0;i<=25;i++)
   {
    cin>>letters[i];
   }
      string word;
    cin>>word;
    int length= word.size();
      int asciiNum[length],height[length];

     for(i=0;i<length;i++)
   {
asciiNum[i]=(int)word[i]-97;
   }
int tallest = height[0];
      for(i=0;i<length;i++)
   {
  for(int j=0;j<=25;j++){
   if(asciiNum[i]==j){height[i]=letters[j];}
  }
  if(tallest< height[i]){
         tallest = height[i];}
   }
   int ans=0;
   ans=tallest*length;
   cout<<ans;


    return 0;
}
