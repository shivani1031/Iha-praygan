#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val) //constructor
    {
        data=val;
        next=NULL;
    }
};

 void insertattail(node* &head, int val)
 {  
     
     node* newnode = new node(val);

     if(head==NULL)
     {
         head=newnode;
         return;
     }
     node *temp= head;
     while(temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next = newnode;
 }

 void insertathead(node* &head, int val )
 {
     node *newnode = new node(val);
     newnode->next=head;
     head = newnode;
 }

void display( node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void search(node* head, int key)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        return true;
    }
    temp = temp->next;
}

int main()
{
node *head=NULL;
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
display(head);
insertathead(head,1);
display(head);
cout<<search(head,5)<<endl;
cout<<search(head,3)<<endl;

    return 0;
}