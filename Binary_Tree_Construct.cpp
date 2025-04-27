#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}
node *constructTree(vector<int> &preorder, int preStart, int preEnd, vector<int> &inorder, int inStart, int inEnd, map<int, int> &mp)
{
    // Base Case
    if (preStart > preEnd || inStart > inEnd)
    {
        return NULL;
    }

    node *root = newNode(preorder[preStart]);
    int elem = mp[root->data];
    int nElem = elem - inStart; // No. of Elements on left on root in Inorder....

    // Recursive calls for left and Right Binary tree
    root->left = constructTree(preorder, preStart + 1, preStart + nElem, inorder, inStart, elem - 1, mp);
    root->right = constructTree(preorder, preStart + nElem + 1, preEnd, inorder, elem + 1, inEnd, mp);

    return root;
}

node *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    int preStart = 0, preEnd = preorder.size() - 1;
    int instart = 0, inEnd = inorder.size() - 1;
    map<int, int> mp;
    for (int i = instart; i < inEnd; i++)
    {
        mp[inorder[i]] = i;
    }

    return constructTree(preorder, preStart, preEnd, inorder, instart, inEnd, mp);
}

int main()
{

    vector<int> preorder{10, 20, 40, 50, 30, 60};
    vector<int> inorder{40, 20, 50, 10, 60, 30};
    node *root = buildTree(preorder, inorder);
    return 0;
}