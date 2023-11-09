//Binary Search Tree Inorder,PreOrder and Post Order Traversal
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root=NULL;
struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=new node();
        root->data=data;
        root->left=root->right=NULL;
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else
    {
        root->right=insert(root->right,data);
    }
    return root;
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number of nodes in the tree: ";
    cin>>n;
    int data;
    cout<<"Enter the data of the nodes: ";
    for(int i=0;i<n;i++)
    {
        cin>>data;
        root=insert(root,data);
    }
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    postorder(root);
    cout<<endl;
    return 0;
}
