#include<iostream>
using namespace std;
int insertion(int ar[],int n)
{
int key,j;
for(int i=1;i<n;i++)
{
key=ar[i];
j=i;
while(j>0 && ar[j-1]>key)
{
ar[j]=ar[j-1];
j=j-1;
}
ar[j]=key;
}
}
int main()
{
int arr[]={51,45,87,32,59,88,46};
insertion(arr,7);
for(int i=0;i<7;i++)
cout<<arr[i]<<" ";
}
