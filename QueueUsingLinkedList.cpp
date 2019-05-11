#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
int data;
struct Node *next;
};
struct Node* front=NULL;
struct Node *rear=NULL;
int push(int x)
{
struct Node *temp;
temp=(struct Node *)malloc(sizeof(struct Node));
temp->data=x;
temp->next=NULL;
if(front==NULL && rear==NULL)
{
front =temp;
rear=temp;
}
rear=rear->next;
rear=temp;
}
int display()
{
    struct Node *d;
    if(front==NULL)
        cout<<"Queue is empty";
    else
    {
        d=front ;
        while(d!=NULL)
        {
            cout<<d->data<<" ";
            d=d->next;
        }
    }
}
int main()
{
    int ch,y;
    cout<<"1.) for push elements"<<endl;
    cout<<"2.) for display elements"<<endl;
    cout<<"3.) for Exit"<<endl;
    do
    {
        cout<<"Enter ur choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter a number which u want to be insert: ";
            cin>>y;
            push(y);
            break;
        case 2:
         display();
         break;
        case 3:
            exit(1);
            break;
        default:
            cout<<"INvalid input";
        }
    }while(ch!=3);
}

