//Linear Search...........
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,size,flage=1;
cout<<"Enter the size of array: ";
cin>>size;
int ar[size];
cout<<"enter "<<size<<" elements : ";
for(int j=0;j<size;j++)
cin>>ar[j];
cout<<"Enter a number which you want to search: ";
cin>>n;
for(int i=0;i<size;i++)
{
if(ar[i]==n)
{
    flage=0;
cout<<"Search Successful at index "<<i+1;
}}
if(flage==1)
cout<<"Search Unsuccessful";
}
