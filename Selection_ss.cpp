//Selection sort......
#include<iostream>
using namespace std;
int Selection(int ar[],int s,int N)
{
int loc,min;;
min=ar[s];
loc=s;
for(int j=0+s;j<=N-1;j++)
{
if(min>ar[j])
{
min=ar[j];
loc=j;
}}
return loc;
}
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
int arr[n];
cout<<"Enter "<<n<<" elements: ";
for(int k=0;k<n;k++)
    cin>>arr[k];
for(int i=0;i<n;i++)
{
int temp,Loc;
Loc=Selection(arr,i,n);
temp=arr[i];
arr[i]=arr[Loc];
arr[Loc]=temp;
}
for(int r=0;r<n;r++)
cout<<arr[r]<<" ";
}
