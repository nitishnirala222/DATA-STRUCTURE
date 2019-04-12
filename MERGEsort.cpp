#include<iostream>
#include<stdlib.h>
using namespace std;
int merge(int A[],int L,int m,int h)
{
int i,j,k=0;
int B[20];
i=L;j=m+1;
while(i<=m && j<=h)
{
if(A[i]<A[j])
B[k++]=A[i++];
else
B[k++]=A[j++];
}
while(i<=m)
B[k++]=A[i++];
while(j<=h)
B[k++]=A[j++];
for(int i=h;i>=L;i--)
A[i]=B[--k];
}
int display(int D[],int s)
{
for(int i=0;i<s;i++)
cout<<D[i]<<" ";
}
int mergesort(int ar[],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(ar,low,mid);
mergesort(ar,mid+1,high);
merge(ar,low,mid,high);
}}
int main()
{
int n;
cout<<"Enter the size of array: ";
cin>>n;
int arr[n];
cout<<"Please enter "<<n<<" elements: ";
for(int i=0;i<n;i++)
cin>>arr[i];
mergesort(arr,0,n-1);
display(arr,n);
}
