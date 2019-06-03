#include<iostream>
using namespace std;
int swap(int *p,int *q)
{
int temp;                    //The Time complexity of Bubble sort is O(n^2).
temp=*p;
*p=*q;
*q=temp;
}
int main()
{
int n;
cout<<"enter the size of an array : ";
cin>>n;
int arr[n];
cout<<"enter "<<n<<" elements: ";
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i;j++)
{
if(arr[j]>arr[j+1])
swap(&arr[j],&arr[j+1]);
}}
for(int k=0;k<n;k++)
cout<<arr[k]<<" ";
}
