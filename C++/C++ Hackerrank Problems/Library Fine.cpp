#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){

int d1,m1,y1,d2,m2,y2,fine,daysLate,monthsLate;


cin>>d1>>m1>>y1;//return date
cin>>d2>>m2>>y2;//date to be returned

if(d1<=d2 && m1<=m2 && y1<=y2 ){fine=0;}
if(y1<y2 ){fine=0;}
if( m1<m2 && y1<=y2 ){fine=0;}

if(d1>d2 && m1<=m2 && y1<=y2 ){
        daysLate=d1-d2;
        fine=15 * daysLate;}

if(m1>m2 && y1<=y2 ){
        monthsLate=m1-m2;
        fine=500 * monthsLate;}

if(y1>y2 ){
        fine=10000;}


cout << fine;

}



