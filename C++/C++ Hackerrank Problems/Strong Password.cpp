#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
int count1=0,count2=0,count3=0,count4=0, totalcount,totalcount2,missing,length;
string word;
cin>>length;
cin>>word;
if(length<6){missing=6-length;}
     for(int i=0; i<length; i++){
 if(word[i]>='A' && word[i]<='Z'){count1++;}   //uppercase
  if(word[i]>=97 && word[i]<=122){count2++;} //lowercase
if(word[i]>=48 && word[i]<=57){count3++;}
if(word[i]>=33 && word[i]<=46){count4++;}


 }
 int a=0,b=0,c=0,d=0;
 if (count1==0 ){ a=1;   }
 if (count2==0 ){ b=1;   }
 if (count3==0 ){ c=1;   }
 if (count4==0 ){ d=1;   }

totalcount=a+b+c+d;
totalcount2=missing+a+b+c+d;
 if(length<6){

        cout<<totalcount2;}
else{
    cout<<totalcount;


}

return 0;}

