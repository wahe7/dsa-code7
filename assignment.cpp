
// Q9


#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};

void append(node* &head,node* &tail, int d)
{
    node* insert=new node(d);
    if(head==NULL)
    {
        head=insert;
        tail=insert;
       
    }
    else{
        tail->next=insert;
        tail=insert;
    }
}
void sortlist(node* head)
{
    node* curr=head;
    node* index=NULL;
    int temp;
    while(curr!=NULL)
    {
        index=curr->next;
        while(index!=NULL)
        {
            if(curr->data >index->data)
            {
                temp=curr->data;
                curr->data=index->data;
                index->data=temp;
            }
            index=index->next;
        }
        curr=curr->next;
    }
   
}
void reverse(node* &head)

{
    node* prev=NULL;
    node* curr=head;
    node* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;

}
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    int d,n;
    node* head=NULL;
    node* tail=NULL;
    cin>>d;
    while(d!=-1)
    {
        append(head,tail,d);
        cin>>d;
    }
    cin>>d;
    append(head,tail,d);
   
   sortlist(head);
    print(head);
}
