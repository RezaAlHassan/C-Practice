#include<iostream>
using namespace std;
int main ()
{
   int i, j,size,key;
   int arr[10];
   cout<<"Enter array size:";
   cin>>size;
   cout<< "Enter array elements to be sorted:"<<endl;
   for(int i = 0; i < size; i++)
{
cin>>arr[i];
}
cout<<endl;
for(i = 1; i<size; i++) {

key=arr[i];
j=i-1;
while((j>=0)&&(arr[j]>key)){

arr[j+1]=arr[j];
j=j-1;

}
arr[j+1]=key;

}
cout <<"The sorted array:";
for(i = 0; i<size; i++) {
   cout <<arr[i]<<"\t";
   }
return 0;
}
