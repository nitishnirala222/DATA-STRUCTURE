#include<iostream>
using namespace std;
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partitioning(int A[],int p,int q)
{
int i=p-1;
int pivot=A[q];
for(int j=p;j<=q-1;j++)
{
if(A[j]<=pivot)
{
i++;
swap(&A[i],&A[j]);
}}
swap(&A[i+1],&A[q]);
return (i+1);
}
int QuickSort(int B[],int l,int h)
{
if(l<h)
{
int t=partitioning(B,l,h);
QuickSort(B,l,t-1);
QuickSort(B,t+1,h);
}}
int display(int ar[],int s)
{
    for(int i=0;i<s;i++)
        cout<<ar[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
int Ar[n];
cout<<"enter "<<n<<" elements: ";
for(int i=0;i<n;i++)
    cin>>Ar[i];
QuickSort(Ar,0,n-1);
display(Ar,n);
}
