#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{
    cout << "Enter Data: " << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter Data for inserting in Left of " << data << endl;
    root->left = buildTree(root->left);

    cout << "Enter Data for inserting in Right of " << data << endl;
    root->right = buildTree(root->right);
}

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildTree(root);
}