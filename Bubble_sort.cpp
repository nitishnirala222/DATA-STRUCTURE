//Bubble sort....
#include<iostream>
using namespace std;
int Bubble_sort(int arr[],int N)
{
for(int r=1;r<=N;r++)
{
for(int i=0;i<=N-r;i++)
{
if(arr[i]>arr[i+1])
{
int temp;
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}}}}
int main()
{
int s;
cout<<"Enter the size of array: ";
cin>>s;
int ar[s];
cout<<"enter "<<s<<" elements: ";
for(int i=0;i<s;i++)
    cin>>ar[i];
Bubble_sort(ar,s-1);
for(int k=0;k<s;k++)
{
cout<<ar[k]<<" ";
}
}
