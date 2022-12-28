#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* right;
    node* left;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insertintobst(node* &root,int d)
{
    if(root==NULL)
    {
        //base rule
        root=new node(d);
        return root;
    }
    if(d>root->data)
    {
        //right mai dalana hai
        root->right=insertintobst(root->right,d);
    }
    else{
        //left mai dalna hai
        root->left=insertintobst(root->left,d);
    }
    return root;
}
void takeinput(node* &root)
{
    int d;
    cin>>d;
    while(d!=-1)
    {
        root=insertintobst(root,d);
        cin>>d;
    }
    
}
void levelordertraversal(node* &root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else{
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node* &root)
{
    if(root==NULL)
    {
        return;
    }
   inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

//search in bst
// bool search(node* &root,int x)
// {
//     if(root==NULL)
//     {
//         return false;
//     }
//     if(root->data==x)
//     {
//         return true;
//     }
//     if(root->data > x)
//     {
//         return search(root->left,x);
//     }
//     else{
//         return search(root->right,x);
//     }
// }



//find min value

node* min(node* &root)
{
    node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
node* max(node* &root)
{
    node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}

// deletion
// node* deletion(node* root,int val)
// {
//     if(root==NULL)
//      return NULL;
//     if(root->data==val)
//     {
//         //0 child
//         if(root->left==NULL && root->right==NULL)
//         {
//             delete root;
//             return NULL;
//         }

//         //1child
//     if(root->left!=NULL && root->right==NULL)
//     {
//         node* temp=root->left;
//         delete root;
//         return temp;
//     }
//        if(root->left==NULL && root->right!=NULL)
//     {
//         node* temp=root->right;
//         delete root;
//         return temp;
//     }
//         //2child
//          if(root->left!=NULL && root->right!=NULL)   
//          {
//             int mini=min(root->right)->data;
//             root->data=mini;
//             root->right=deletion(root->right,mini);
//             return root;
//          }
//     }

//     else if(root->data>val)
//     {
//         root->left=deletion(root->left,val);
//         return root;
//     }
//     else
//        {
//         root->right=deletion(root->right,val);
//         return root;
//     }
// }

//isBST valid
// bool isbst(node* root,int min,int max)
//     {
//         if(root==NULL)
//         {
//             return true;
//         }
//         if(root->data>=min && root->data<=max)
//         {
//             bool left=isbst(root->left,min,root->data);
//             bool right=isbst(root->right,root->data,max);
//             return left && right;
//         }
//         else{
//             return false;
//         }
//     }

// bool isbstvalid(node* root)
// {
//     return isbst(root,INT16_MIN,INT16_MAX);
// }

//find k-th smallest element

int solve(node* root,int i,int k)
{
    if(root==NULL)
    {
        return -1;

    }
    int left=solve(root->left,i,k);
    i++;
    if(i==k)
    {
        return root->data;
    }
    return solve(root->right,i,k);
}
int ksmall(node* root,int k)
{
    int i=0;
    
    return solve(root,i,k);
}

int main()
{
    node* root=NULL;
    cout<<"taking input"<<endl;
    takeinput(root);
   
    // levelordertraversal(root);
   
    // int x;
    // cin>>x;
    // cout<<search(root,x);
    // cout<<min(root)->data<<endl;
    // cout<<max(root)->data;
    // deletion(root,3);
    cout<<"printing"<<endl;
    cout<<ksmall(root,3);
    cout<<endl;
     inorder(root);
    
//    cout<<isbstvalid(root);
}