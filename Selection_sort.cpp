#include<iostream>
using namespace std;
int Selection(int ar[],int k,int N)
{
int loc,min;
min=ar[k];
loc=k;
for(int i=k+1;i<=N-1;i++)
{
if(min>ar[i])
{
min=ar[i];
loc=i;
}}
return loc;
}
int main()
{
int Loc,arr[]={12,14,54,65,28,11,5,31};
for(int j=0;j<8;j++)
{
Loc=Selection(arr,j,8);
int temp;
temp=arr[j];
arr[j]=arr[Loc];
arr[Loc]=temp;
}
for(int i=0;i<8;i++)
{
cout<<arr[i]<<" ";
}
}
