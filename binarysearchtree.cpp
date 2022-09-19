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
int main()
{
    node* root=NULL;
    cout<<"taking input"<<endl;
    takeinput(root);
    cout<<"printing"<<endl;
    // levelordertraversal(root);
    // inorder(root);
    // int x;
    // cin>>x;
    // cout<<search(root,x);
    cout<<min(root)->data<<endl;
    cout<<max(root)->data;

}