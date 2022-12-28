// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node*next;
//     Node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void inhead(Node* &head,int d)
// {
//     Node* insert=new Node(d);
//     insert->next=head;
//     head=insert;

// }
//   void reverse(Node* &head,Node* &tail)
//   {
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
//   }
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

// void del(Node* &head,int pos)
// {
       

//     if(pos==1)
//     {
        
//         Node* temp=head;
//         head=head->next;
//         delete(temp);

//         return;
//     }
//     else{
//         Node* curr=head;
//         Node* prev=NULL;
//         int cnt=1;
//         while(cnt<pos)
//         {
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         delete(curr);
//     }
// }
// void search(Node* &head,Node* &tail,int d)
// {
//    int cnt=1;
//    Node* temp=head;
//    while(temp!=NULL)
//    {
//     if(temp->data==d)
//     {
//         cout<<"yes"<<cnt<<endl;
//         return;
//     }
    
//     temp=temp->next;
//     cnt++;
//    }
//    cout<<"no";
  
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
// void insertmiddle(Node* &head,Node* &tail,int d,int n)
// {
//       Node* insert=new Node(d);
//     int mid=n/2;
//      Node* temp=head;
//     int i;
//     for(i=0;i<mid-1;i++)
//     {
//         temp=temp->next;
//     }
   
  
//     insert->next=temp->next;
//     temp->next=insert; 
  
// }
// int main()
// {
//     Node* head=NULL;
//     Node* tail=NULL;
//      append(tail,head,8);
//      append(tail,head,76);
//     inhead(head,90);
//     append(tail,head,4);
//      append(tail,head,34);
//     insertmiddle(head,tail,3,4);
   
//   reverse(head,tail);
//     print(head);
  

  
// }
//delete from taking element


// void del(Node* &head,int d)
// {
//     if(head->data==d)
//     {
//         Node* temp=head;
//         head=head->next;
//         delete(temp);
//         return;
//     }
//     Node* curr=head;
//     Node* prev=NULL;
    
//     while(curr->data!=d)
//     {
//         prev=curr;
//         curr=curr->next;
      
//     }

//     prev->next=curr->next;
//     delete(curr);
// }

// #include <iostream>
// using namespace std;
// class Node{
// 	public:
// 	int data;
// 	Node* next;
// 	Node(int d)
// 	{
// 		this->data=d;
// 		this->next=NULL;
// 	}
// };
// void append(Node* &head,Node* &tail,int d)
// {
// 	Node* insert=new Node(d);
// 	if(head==NULL)
// 	{
// 		head=insert;
// 		tail=insert;
// 		return;
// 	}
//     else{

// 		insert->next=tail->next;
// 		tail->next=insert;
//         tail=insert;
//         return;
//     }
		
// }
// void reverse(Node* &head,Node* &tail)
// {
// 	Node* curr=head;
// 	Node* prev=NULL;
// 	Node* next=NULL;
// 	while(curr!=NULL)
// 	{
// 		next=curr->next;
// 		curr->next=prev;
// 		prev=curr;
// 		curr=next;
// 	}
// 	 head=prev;
// }
//  void print(Node* &head)
//  {
// 	 Node* temp=head;
// 	 while(temp!=NULL)
// 	 {
// 		 cout<<temp->data<<" ";
// 		 temp=temp->next;
// 	 }
//  }
//  void del(Node* &head,Node* & tail,int d)
//  {
	
// 	if(head->data==d)
// 	{
// 		Node* temp=head;
// 		head=head->next;
// 		delete temp;
// 	}
// 	else{
// 		Node* curr=head;
// 		Node* prev=NULL;
// 		while(curr->data!=d)
// 		{
// 			prev=curr;
// 			curr=curr->next;
// 		}
// 		prev->next=curr->next;
// 		delete curr;
// 	}
//  }
// int main() {
// 	Node* head=NULL;
// 	Node* tail=NULL;
// 	int num;
// 	cin >> num;   
// 	int f,i;
// 	for(i=0;i<num;i++)
// 	{
// 		cin>>f;
// 		append(head,tail,f);
// 	}
// 	// reverse(head,tail);
// 	del(head,tail,4);
// 	print(head);

// }




