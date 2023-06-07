#include<iostream>

struct node
{
    int data;
    struct node *left ,*right;

    node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

    preorder(struct node *root)
    {
        if(root==NULL)
        {
            return 0;
        }
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
};

int main()
{
    struct node *root=new node(1);

    root->left=new node(2);
    root->right=new node(3);

    preorder(root);
}
