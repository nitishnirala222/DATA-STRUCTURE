#include<iostream>
#include<stdlib.h>
using namespace std;
#define max 5
int Queue[max];
int front=-1;
int rear=-1;
int Enqueue(int n)
{
if(rear>=max-1)
cout<<"overflow Queue";
else
{
if(front==-1 && rear==-1)
{
front=0;
rear=0;
}
else
rear++;
Queue[rear]=n;
}}
int Dequeue()
{
    int value;
if(front==-1 || front>rear)
cout<<"Queue is Underflow.deletion is not possible";
else
{
value=Queue[front];
front++;
if(front>rear){
front=-1;
rear=-1;
}
return value;
}}
int display()
{
    if(front==-1 || front >rear)
        cout<<"Queue is Empty";
    else{
        cout<<"The inserted elements are: ";
        for(int i=front;i<=rear;i++)
            cout<<Queue[i]<<" ";
    }
}
int main()
{
int x,y;
cout<<"1.for insertion elements"<<endl;
cout<<"2.for deletion of elements"<<endl;
cout<<"3.for display elements"<<endl;
cout<<"4.for Exit "<<endl;
do
{
cout<<"Enter your choice: ";
cin>>y;
switch(y)
{
case 1:
cout<<"enter a number which u want to be insert: ";
cin>>x;
Enqueue(x);
break;
case 2:
cout<<"deleted element is "<<Dequeue();
break;
case 3:
display();
break;
case 4:
exit(1);
break;
default:
cout<<"Invalid input";
}
}while(y!=4);
}
