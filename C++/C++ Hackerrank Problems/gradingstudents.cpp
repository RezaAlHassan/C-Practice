#include <iostream>
using namespace std;

int main(){
int i,n,final_grade, grades[60];

cout<<"no of students:";
cin>>n;
cout<<"initial grades:";
for(i=0; i<n; i++){
       cin >> grades[i];
}
cout<<"Rounded grades:"<<endl;
for(i=0; i<n; i++ ){
 if( grades[i]<38) {cout<<grades[i]<<endl;}

 if(grades[i]>=38){
     if(grades[i]%5==3||grades[i]%5==4 )
     {
     int remainder = grades[i] % 5;
   cout<<grades[i] + 5 - remainder<<endl;


     }

     else{cout<<grades[i]<<endl;}
 }
}}
