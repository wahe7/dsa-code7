// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int d)
//     {
//         this->data=d;
//         this->prev=NULL;
//         this->next=NULL;
//     }
// };
// int getlength(Node* &head)
// {   
//     int len=0;
//        Node* temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// void insertathead(Node* &head,Node* &tail,int d)
// {
//     //for empty head
//     if(head==NULL)
//     {
//         Node*insert=new Node(d);
//         head=insert;
//         tail=insert;
        
//     }
//     else{
//         Node* insert=new Node(d);
//         insert->next=head;
//         head->prev=insert;
//         head=insert;
//     }    
  

// }
// void insertattail(Node* &tail,Node* &head,int d)
// {
//     //for empty tail
//     if(tail==NULL)
//     {
//         Node* insert=new Node(d);
//         tail=insert;
//         head=insert;

//     }
//     else{
//         Node* insert=new Node(d);
//         tail->next=insert;
//         insert->prev=tail;
//         tail=insert;
//     }
  
// }

// void insertatanypos(Node* &tail,Node* &head,int d,int pos)
// {
//     Node* insert=new Node(d);
//     int cnt=1;
//     Node* temp=head;
//     if(pos==1)
    
//     {

//         insertathead(head,tail,d);
//         return;
   

//     }
//     while(cnt<pos-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp->next==NULL)
//     {
//         insertattail(tail,head,d);
//         return;
//     }
//  insert->next=head->next;
//  head->next->prev=insert;
//  head->next=insert;
//  insert->prev=head;

// }
// void print(Node* &head){
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
         
//     }
//    cout<<endl;
// }
// int main(){

//     // Node* node1=new Node(10);
//     Node* head=NULL;
//     Node* tail=NULL;
//     int i,n;
// for(i=1;i<6;i++)
// {
//     cout<<i<<" value : ";
//     cin>>n;
//     insertattail(tail,head,n);
// }

//      print(head);
//     insertatanypos(tail,head,2,5);
//    print(head);
//     //  print(n1);
//     //   cout<<"length of linklist = "<<getlength(head);
    
// }



// #include<iostream>
// using namespace  std;
// class Node{
//     public:
// int data;
// Node* next;
// Node*prev;
//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void append(Node* &tail,Node* &head,int d)
// {
   

//     if(head==NULL)
//     {
//         Node* insert=new Node(d);
//         tail=insert;
//         head=insert;
//         return;
//     }
//     else{
//         Node* insert=new Node(d);
//       tail->next=insert;
//       insert->prev=tail;
//       tail=insert;
//         return;
//     }
// }
// void reverse(Node* &head,Node* &tail)
// {
//     Node* prev=NULL;
//         Node* next=NULL;
//             Node* curr=head;
//             while(curr!=NULL)
//             {
//                 next=curr->next;
//                 curr->next=prev;
//                 // curr->prev=next;
//                 prev=curr;
//                 curr=next;
//             }
//             head=prev;



// }
// void print(Node* &head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }
// int main()
// {

//     Node*head=NULL;
//      Node*tail=NULL;
//      int n,i,e;
//      cout<<"enter lenght : ";
//   cin>>n;
//   cout<<"enter value : ";
//   for(i=0;i<n;i++)
//   {
//     cin>>e;
//     append(tail,head,e);
//   }

//     reverse(head,tail);
//      print(head);

// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
void append(Node* &head,Node* &tail,int d)
{
    Node* insert=new Node(d);
    if(head==NULL)
    {
        head=insert;
        tail=insert;
        return;
    }
    else{
     tail->next=insert;
     insert->prev=tail;
     tail=insert;
        return;

    }
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{

    Node* head=NULL;
    Node* tail=NULL;
    int d,i;
    for(i=0;i<5;i++)
    {
        cin>>d;
        append(head,tail,d);
    }
    print(head);
    
}