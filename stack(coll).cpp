#include<iostream>
#include<stdlib.h>
using namespace std;
#define s 100
int stack[s],top=-1;
int push(int n)
{
	if(top>=n-1)
	cout<<"stack is overflow";
	else
	{
		top++;
		stack[top]=n;
	}
}
int pop()
{
	if(top<=-1)
	cout<<"stack is underflow";
	else
	{
		cout<<"poped element is "<<stack[top]<<endl;;
		top--;
	}
}
int display()
{
	for(int i=0;i<=top;i++)
	cout<<stack[i]<<" ";
	cout<<endl;
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: ";
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:";
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
      return 0;
}

