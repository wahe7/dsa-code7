//create binary tree
// #include<iostream>
// #include<queue>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* left;
//     node* right;
//     node(int data)
//     {
//         this->data=data;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// node* create(node* root)
// {
//     cout<<"enter data: "<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1)
//     {
//         return NULL;
//     }
//     cout<<"enter left data "<<data<<endl;
//     root->left=create(root->left);
//     cout<<"enter right data "<<data<<endl;
//     root->right=create(root->right);
//     return root;
    
// }
// // void levelordertraversal(node* root)
// // {
// //     queue<node*>q;
// //     q.push(root);
// //     q.push(NULL);
// //     while(!q.empty())
// //     {
// //         node* temp=q.front();
// //         q.pop();

// //         if(temp==NULL)
// //         {
// //             cout<<endl;
            
// //             if(!q.empty())
// //             {
// //                 q.push(NULL);
// //             }
// //         }

// //         else{
// //             cout<<temp->data<<" ";

// //             if(temp->left)
// //             {
// //                 q.push(temp->left);
// //             }
// //             if(temp->right)
// //             {
// //                 q.push(temp->right);
// //             }
// //         }
// //     }
// // }

// void inorder(node* &root)
// {
//     //lnr
//     if(root==NULL)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data;
//     inorder(root->right);
// }
// int main()
// {
//     node* root=NULL;
//     root=create(root);
//     inorder(root);
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class node{
//     public:
//     node* left;
//     node* right;
//     int data;
//     node(int d)
//     {
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// node* create(node* root)
// {
//     cout<<"enter data : "<<endl;
//     int d;
//     cin>>d;
//     root=new node(d);
//     if(d==-1)
//     {
//         return NULL;
//     }
//     cout<<"enter data for left : "<<d<<endl;
//     root->left=create(root->left);
//     cout<<"enter data for right : "<<d<<endl;
//     root->right=create(root->right);
//     return root;
// }
// // void reverseinorder(node* root)
// // {
// //     //lnr
    
// //     if(root==NULL)
// //     {
// //         return;
// //     }
// //     reverseinorder(root->right);
// //     cout<<root->data<<"  ";
// //     reverseinorder(root->left);
// // }

// int main()
// {
//     node* root=NULL;
//     root=create(root);
//     reverseinorder(root);
   
// }

//height of tree

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
    

};
node* create(node* root)
{
    int d;
    cout<<"enter data : ";
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter data for left of "<<d<<endl;
    root->left=create(root->left);
    cout<<"enter data for right of "<<d<<endl;
    root->right=create(root->right);
    return root;
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
// int height(node* root)
// {
//     if(root==NULL)
//     {
//         return 0;
//     }
//     int left=height(root->left);
//     int right=height(root->right);
//     int ans=max(left,right)+1;
//     return ans;
// }
//diameter

//         pair<int ,int> diameter(node* root)
// {
//     if(root==NULL)
//     {
//         pair<int,int> p=make_pair(0,0);
//         return p;
//     }
//     pair<int,int>left=diameter(root->left);
//     pair<int,int>right=diameter(root->right);
//     int op1=left.first;
//     int op2=right.first;
//     int op3=(left.second+1+right.second);
//     pair<int,int> ans;
//     ans.first=max(op1,max(op2,op3));
    
//     ans.second=max(left.second,right.second)+1;
    
//     return ans;
// }

//     int dia(node* root)
// {
//     return diameter(root).first;
    
// }
//diameter end;

//check balanced tree
pair<bool,int> isbalanced(node* root)
{
    if(root==NULL)
    {
        pair<bool,int> p=make_pair(true,0);
        return p;
    }
    pair<bool,int> left=isbalanced(root->left);
    pair<bool,int> right=isbalanced(root->right);
    
    bool leftans=left.first;
    bool rightans=right.first;
    bool diff=(left.second-right.second)<=1;
    pair<bool,int> ans;

    if(leftans && rightans && diff)
    {
        ans.first=true;
    }
    else{
        ans.first=false;
    }
    return ans;
}
bool balanced(node* root)
{
    return isbalanced(root).first;
}

//end balanced tree

int main()
{
    node* root=NULL;
    root=create(root);
    // inorder(root);
    // cout<<endl;
    cout<<balanced(root);
}