
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }

    
// };
// //insertionathead
//     void insertathead(Node* &head,int d)
//     {
//         Node* temp=new Node(d);
//         temp->next=head;
//         head=temp;
//     }

//     //insertattail
//     void insertattail(Node* &tail,int d)
//     {
//         Node* temp=new Node(d);
//         tail->next=temp;
//         tail=temp;
//     }
//     //insert at any position
//     void insertatpos(Node* &head,int pos,int d)
//     {

//         if(pos==1)
//         {
//             insertathead(head,d);
//         }
     
//         Node* node2=head;
//         int cnt=1;
//         while(cnt<pos-1)
//         {
//             node2=node2->next;
//             cnt++;
//         }
//            if(node2->next=NULL)
//         {
//             insertattail(head,d);
//             return;
//         }
//         Node* insertatpo=new Node(d);
//         insertatpo->next=node2->next;
//         node2->next=insertatpo;
        
//     }

//     void print(Node* &head)
// {
//     Node* temp= head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main()
// {
//     Node* node1=new Node(23);
    
//     Node* head=node1;
   
//     Node* tail=node1;
    
    

//     insertattail(tail,89);
    
//     insertattail(tail,67);
    
 
//     insertatpos(head,4,56);
//     print(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }

//     ~Node()
//     {
//       int value=this->data;
//       if(this->next!=NULL)
//       {
//         delete next;
//         this->next=NULL;
//       }
//     }
    

// };
// void insertathead(Node* &head,int d)
// {
//     Node* temp=new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(Node* &tail,int d)
// {
//     Node* temp=new Node(d);
//     tail->next=temp;
//     tail=temp;

// }
//  void insertatpos(Node* &head,int pos,int d)
// {
    
   
//     if(pos==1)
//     {
//         insertathead(head,d);
//         return;
//     }
//     Node* node1=head;
//     int cnt=1;
//     while(cnt<pos-1)
//     {
//         node1=node1->next;
//         cnt++;
//     }
//      if(node1==NULL)
//     {
//         insertattail(head,d);
//         return;
//     }
   
   
//       Node* temp=new Node(d);
//      temp->next=node1->next;
//     node1->next=temp;
   
// }
//   void deleteatpos(Node* &head,int pos)
//   {
//     if(pos==1)
//     {
//       Node* temp=head;
//       head=head->next;
//       temp->next=NULL;
//       delete temp;
//     }
//     else{

//       Node* curr=head;
//       Node* prev=NULL;
//       int cnt=1;
//       while(cnt<pos)
//       {
//         prev=curr;
//         curr=curr->next;
//         cnt++;
//       }
//       prev->next=curr->next;
//       curr->next=NULL;
//       delete curr;

//     }
//   }
// void print(Node* &head)
// {
//     Node * temp=head;
    
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     cout<<endl;
// }
// int main()
// {
//     Node* node1=new Node(10);
//     Node* head=node1;
//     Node* tail=node1;
//     print(head);
//     insertathead(head,23);
//     print(head);
//     insertattail(tail,90);
//     print(head);
//     insertattail(tail,87);
//     print(head);
//     insertatpos(head,5,69);
//     print(head);
//     deleteatpos(head,1);
//     print(head);
 
    
//     return 0;

// }







// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=10;
//     int*p=&a;
//     int**q=&p;
//     cout<<a<<endl;
//     cout<<&a<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<&p<<endl;
//     cout<<q<<endl;
//     cout<<**q<<endl;
//     cout<<&q<<endl;
//     cout<<*q<<endl;
// }


// #include<iostream>
// using  namespace std;


// void callbyref(int *p,int *q)
// {   
//     int *e;
 
//     *e=*q;
//     *q=*p;
//     *p=*e;


// }
// void swap(int a,int b)
// {
//         int c;
//     c=a;
//     a=b;
//     b=c;
// }
// int main()
// {
//   int a=10;
//   int *p;
//   p=&a;
//   int b=98;
//   int *q;
//   q=&b;
//   *p=*p-10;

//   cout<<a;


 

// }

//try
// #include<iostream>
// using namespace std;

// class Node{
//   public:

// int data;
//    Node* next;
//    Node(int data)
//    {
//     this->data=data;
//     this->next=NULL;
//    }



// };
// void insertathead(Node* &head,int d)
// {
  
//   Node*insert=new Node(d);
//   insert->next=head;
//   head=insert;
  
// }
// void insertattail(Node* &tail,int d)
// {
//   Node* insert=new Node(d);
//   tail->next=insert;
//   tail=insert;


// }
//  void print(Node * &head)

//  {
//   Node*temp=head;
//   while(temp!=NULL)
//   {
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
//   cout<<endl;
//  } 
// int main()
// {
//   Node *node1=new Node(10);
//   Node* head=node1;
//   Node* tail=node1;
  
// insertathead(head,89);
// insertattail(tail,90);
//   print(head);



// }










// #include<iostream>
// using namespace std;
// class Node{
//   public:
//   int data;
//   Node* next;
//   Node(int d)
//   {
//     this->data=d;
//     this->next=NULL;
//   }
 
// };
// void insertathead(Node* &head,int d)
// {
  
//   Node*insert=new Node(d);
//   insert->next=head;
//   head=insert;
  
// }
// void append(Node* &tail,Node* &head,int d)
// {
//   Node* temp=new Node(d);
//   if(head==NULL){

//     head=temp;
//     tail=temp;
//     return;
//   }
//   else{
     
  

//   tail->next=temp;
//   tail=temp;
//     return;
  

  
//   }

// }
// void print(Node* &head){
//   Node* temp=head;
    
//     while(temp!=NULL)
//     {
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }
//     cout<<endl;
// }
// int main()
// {
//     int i;
//     Node* head=NULL;
//     Node* tail=NULL;
//     for(i=0;i<5;i++)
//     {
//         append(tail,head,i);
        
//     }
// insertathead(head,9);

//     print(head);


// }


// #include<iostream>
// using namespace std;
// class Node
// {
//     public:
//     int data;
//     Node* next;
//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void append(Node* &tail,Node* &head,int d)
// {
//      Node* insert=new Node(d);
//     if(head==NULL)
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
// void print(Node* &head){
//   Node* temp=head;
    
//     while(temp!=NULL)
//     {
//       cout<<temp->data<<" ";
//       temp=temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     int i;
//     Node* head=NULL;
//     Node* tail=NULL;
//  append(tail,head,6);
//  append(tail,head,9);
//  append(tail,head,10);
//  print(head);
// }

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
    // ~Node()
    // {
    //     int value=this->data;
    //     if(this->next!=NULL)
    //     {
    //          delete next;
    //         this->next=NULL;
           
    //     }
    // }
// };
//insert at head
// void inserathead(Node* &head,int d)
// {
//     Node* insert=new Node(d);
//     insert->next=head;
//     head=insert;
    

// }
// void append(Node* &tail,Node* &head,int d)
// {
//     Node* insert=new Node(d);
//     if(head==NULL)
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
// void appendatpos(Node* &tail,Node* &head,int pos,int d)
// {
//     Node* insert=new Node(d);
//     Node* temp=head;
//     if(pos==1)
//     {
//         inserathead(head,d);
//         return;
//     }
//     int cnt=1;
//     while(cnt < pos-1)
//     {
//         temp=temp->next;
//         cnt++;
//     }

//     if(temp==NULL)
//     {
//         append(tail,head,d);
//         return;
//     }
     
//     insert->next=temp->next;
//      temp->next=insert;
   
// }
// void del(Node* &head,int pos)
// {
//     if(pos==1)
//     {
//         Node* temp=head;
//         head=head->next;
//     //    temp->next=NULL;
//         delete temp;
//         return;
//     }
//     else{
//         Node* curr=head;
//         Node* prev=NULL;
//        int cnt=1;
//         while(cnt<pos)
//         {
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         // curr->next=NULL;
//         delete curr;
//     }

// }
// void print(Node* &head)
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
//     append(tail,head,90);
//     append(tail,head,99);
//     inserathead(head,98);
//     appendatpos(tail,head,1,89);
//     cout<<"before deletion"<<"\n";
//     print(head);
//     cout<<"after deletion"<<"\n";
//     del(head,1);
//     print(head);
// }



// try deletion

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }    

};
//insert at head
void inserathead(Node* &head,int d)
{
    Node* insert=new Node(d);
    insert->next=head;
    head=insert;
    

}
void append(Node* &tail,Node* &head,int d)
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
        tail=insert;
        return;
    }
}
void appendatpos(Node* &tail,Node* &head,int pos,int d)
{
    Node* insert=new Node(d);
    Node* temp=head;
    if(pos==1)
    {
        inserathead(head,d);
        return;
    }
    int cnt=1;
    while(cnt < pos-1)
    {
        temp=temp->next;
        cnt++;
    }

    if(temp==NULL)
    {
        append(tail,head,d);
        return;
    }
     
    insert->next=temp->next;
     temp->next=insert;
   
}
void del(Node* &head,int pos)
{
if(pos==1)
{
    Node* temp=head;
    head=head->next;
    delete(temp);

}
else{
    Node* curr=head;
    Node*prev=NULL;
    int cnt=1;
    while(cnt<pos)
    {
        prev=curr;
        curr=curr->next;


        
        cnt++;
    }
    prev->next=curr->next;
    delete(curr);

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
    cout<<endl;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int i,c;
    // append(tail,head,90);
    // append(tail,head,99);
   for(i=0;i<5;i++)
   {
    cin>>c;
    inserathead(head,c);
   }
    // appendatpos(tail,head,1,89);
    // cout<<"before deletion"<<"\n";
    print(head);
    // cout<<"after deletion"<<"\n";
    // del(head,1);
    // print(head);
}
