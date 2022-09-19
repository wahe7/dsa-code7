// #include<iostream>
// using namespace std;
// class Node{

//     public:
//     int data;
//     Node* next;
//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// // void insertathead(Node* &head,Node* &tail,int d)
// // {
// //     Node* insert=new Node(d);
// //     if(head==NULL)
// //     {
// //         head=insert;
// //         tail=insert;
// //         return;
// //     }
// //     else{
// //         insert->next=head;
// //         head=insert;
// //         return;
// //     }
// // }
// void insertattail(Node* &head,Node* &tail,int d)
// {
//     Node* insert=new Node(d);
//     if(tail==NULL)
//     {
//         head=insert;
//         tail=insert;
//         return;
//     }
//     else{
//         tail->next=insert;
//         tail=insert;
//         return;
//     }
// }
// void insertatanypos(Node* &head,Node* &tail,int pos,int d)
// {
    
//     Node* insert=new Node(d);
//     Node* temp=head;
//   if(pos==0)
//   {
//     insert->next=head;
//     head=insert;
//     return;
//   }
//     int cnt=1;
//     while(cnt<pos-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp==NULL)
//     {
//         tail->next=insert;
//         tail=insert;
//         return;
//     }
//     insert->next=temp->next;
//     temp->next=insert;
    
  
    
   
// }
// void deletew(Node* &head,Node* &tail,int pos)
// {
//     Node* prev=NULL;
//     Node* curr=head;
//     int cnt=1;
//     if(pos==1)
//     {
//         Node* temp=head;
//         head=head->next;
//         delete temp;
//         return;
//     }
//     while(cnt<pos)
//     {
//         prev=curr;
//         curr=curr->next;
//         cnt++;
//     }
  
//     prev->next=curr->next;
//     delete curr;

// }
// void reverse(Node* &head)
// {
//     Node* curr=head;
//     Node* prev=NULL;
//     Node* next=NULL;
//     while(curr!=NULL)
//     {
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     head=prev;
// }
// void min(Node*head)
// {
//     Node* temp=head;
//     int min;
//     min=head->data;
//     while(temp!=NULL)
//     {
//         if(min>temp->data)
//         {
//             min=temp->data;
//         }
//         temp=temp->next;
//     }
    
//     cout<<min<<endl;
    
// }
// void max(Node*head)
// {
//     Node* temp=head;
//     int max;
//     max=head->data;
//     while(temp!=NULL)
//     {
//         if(max<temp->data)
//         {
//             max=temp->data;
//         }
//         temp=temp->next;
//     }
    
//     cout<<max;
    
// }
// void print(Node* head)
// {
//     Node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//     insertattail(head,tail,4);
//     insertattail(head,tail,7);
//     insertatanypos(head,tail,3,90);
//     // print(head);
// //    reverse(head);
//     min(head);
//     print(head);
//     max(head);

//     // print(head);
// }
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void append(Node* &head,Node* &tail,int d)
{
    Node* insert=new Node(d);
    if(tail==NULL)
    {
        head=insert;
        tail=insert;
        return;
    }
    else{
        tail->next=insert;
        tail=insert;
        return;
    }
}
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
void rev(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int i,n,d,a;
    cin>>n;
  while(n!=0)
  {
      cin>>a;
      for(i=0;i<a;i++)
      {
            cin>>d;
             append(head,tail,d);
              
      }
   
    rev(head);
    print(head);
      n--;
      
  }
   
  
}