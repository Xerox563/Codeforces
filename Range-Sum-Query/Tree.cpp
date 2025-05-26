
//                   Right view of Binary Tree
Node *rightView(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<Node *> ans;
    while (!q.empty())
    {
        int n = q.size();
        Node *node = NULL;
        while (n--)
        {
            node = q.front();
            q.pop();

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        ans.push_back(node);
    }
}

void preOrder(Node *root, int lvl, vector<int> &res)
{
    if (root = NULL || res.size() > lvl)
    {
        return;
    }

    if (res.size() < lvl)
    {
        res.push_back(root->data);
    }
    preOrder(root->right, lvl + 1, res);
    preOrder(root->left, lvl + 1, res);
}
Node *rightView(Node *root)
{
    vector<int> res;
    preOrder(root, 1, res);
}

//                   LCA of Binary Tree

Node *LCA(Node *root, Node *p, Node *q)
{
    if (root == NULL)
    {
        return NULL;
    }

    i(root == p || root == q)
    {
        return root;
    }

    Node *left = LCA(root->left, p, q);
    Node *right = LCA(root->right, p, q);

    if (left != null && right != null)
    {
        return root;
    }
    else if (left != null && rigth == null)
    {
        return left;
    }
    else
    {
        return right;
    }
}

//             Completeness Of a Binary Tree (BFS)

Node *CBT(Node *root)
{
    queue<Node *> q;
    q.push(root);
    vector<vector<int>> temp;
    bool flag = false;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();
            if (node == NULL)
            {
                flag = true;
            }
            else
            {
                if (flag == true)
                {
                    return false;
                }
            }
            q.push(node->left);
            q.push(node->right);
        }
    }
    return true;
}

//                   Right view of Binary Tree (DFS)

int cnt = 0;
int countnodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // cnt Nodes
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return 1 + l + r;
}

bool dfs(Node *root, int idx, int totalNodes)
{
    if (root == NULL)
    {
        return true;
    }
    if (idx > toatlNodes)
    {
        return false;
    }

    bool l = dfs(root->left, 2 * idx, totalNodes);
    bool r = dfs(root->right, 2 * idx + 1, totalNodes);

    if (l && r)
    { // anyone is false
        return false;
    }
    return true;
}

bool CBT(Node *root)
{
    int totalNodes = countNodes(root);
    int i = 1;
    return dfs(root, i, totalNodes);
}

//      Delete the Node and return the Forest
vector<Node *> res;
Node *deleteHelper(Node *root, unordered_set<int> &st)
{
    if (root == NULL)
    {
        return NULL;
    }

    root->left = deleteHelper(root->left, st);
    root->right = deleteHelper(root->right, st);

    if (st.find(root->val) != st.end())
    {
        if (root->left)
            res.push_back(root->left);
        if (root->right)
            res.push_back(root->right);
        return NULL;
    }
    else
    {
        return root;
    }
}
vector<Node *> delNodes(Node *root, vector<int> list)
{

    unordered_set<int> st;
    for (auto &x : list)
    {
        st.insert(x);
    }

    deleteHelper(root, st);
    if (st.find(root->val) == st.end())
    {
        res.push_back(root);
    }
    return res;
}

// find leaves of Binary Tree
unordered_map<int, vector<int>> mp;
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = height(root->left);
    int r = height(root->right);
    int h = 1 + max(l, r);
    mp[h].push_back(root->val);
    return h;
}
vector<vector<int>> findLeaves(Node *root)
{
    vector<vector<int>> ans;
    height(root);
    for (auto it : mp.begin(); it != mp.end(); it++)
    {
        res.push_back(it.second);
    }
    return res;
}

// Pruning Binary Tree

void cntOnes(Node *root, int &cnt)
{
    if (root == NULL)
    {
        return;
    }
    if (root->val == 1)
    {
        cnt++;
    }

    if (root->left)
        cnt += cntOnes(root->left, cnt);
    if (root->right)
        cnt += cntOnes(root->right, cnt);
}

Node *solve(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    int L_ones = 0;
    int R_ones = 0;
    cntOnes(root->left, L_ones);
    cntOnes(root->right, R_ones);

    if (L_ones == 0)
    {
        root->left = NULL;
    }
    if (R_ones == 0)
    {
        root->right = NULL;
    }
    solve(root->left);
    solve(root->right);
    if (root->left == NULL && root->right == NULL && root->val == 0)
    {
        return NULL;
    }
    return root;
}

Node *PruningBT(Node *root)
{
    return solve(root);
}

//                 Approach -2 (Linear Solution)

Node *PruningBT(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    root->left = PruningBT(root->left);
    root->right = PruningBT(root->right);

    if (root->val == 0 && root->left == NULL && root->right == NULL)
    {
        return NULL;
    }
    return root;
}

// Path Sum-I
bool solve(Node *root, int target)
{
    if (root == NULL)
    {
        return false;
    }
    target -= root->val;
    if (target == 0 && root->left == NULL && root->right == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
    bool l = solve(root->left, sum);
    // target += root->val;
    bool r = solve(root->right, sum);
    // target += root->val;
    if (l == true || r == true)
    {
        return true;
    }
    return false;
}

bool pathSum(Node *root, int target)
{
    return solve(root, target);
}

//  Path Sum - II
#include <vector>
using namespace std;

vector<vector<int>> ans;

void solve(Node *root, int target, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    // Subtract root's value from target and add the current node to the path
    target -= root->val;
    path.push_back(root->val);

    // If target is zero and it is a leaf node, store the path in `ans`
    if (target == 0 && root->left == NULL && root->right == NULL)
    {
        ans.push_back(path);
    }
    else
    {
        // Recursively solve for left and right subtrees
        solve(root->left, target, path);
        solve(root->right, target, path);
    }

    // Undo changes (backtrack)
    target += root->val; // Actually, this line can be omitted as `target` is passed by value
    path.pop_back();
}

bool pathSum(Node *root, int target)
{
    vector<int> path;
    ans.clear(); // Make sure `ans` is empty before starting
    solve(root, target, path);
    return !ans.empty();
}

//*  Add One Row to Tree

void solve(Node *root, int d, int curr, int val)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (curr == d - 1)
    {
        Node *temp = new Node(val);
        Node *l = root->left;
        Node *r = root->right;
        root->left = temp;
        root->left = temp;
        temp->left->left = l;
        temp->right->right = r;
        return root;
    }
    solve(root->left, d, curr += 1, val);
    solve(root->right, d, curr += 1, val);
    return root;
}
Node *append(Node *root, int d, int val)
{
    // if depth == 1
    if (d == 1)
    {
        Node *temp = new Node(val);
        temp->left = root;
        return temp;
    }
    int curr = 1;
    solve(root, d, val);
}

// Solution-2

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int value) : val(value), left(nullptr), right(nullptr) {}
};

void solve(Node *root, int d, int curr, int val)
{
    if (root == nullptr)
    {
        return;
    }

    // If we are at the depth just before where we want to insert
    if (curr == d - 1)
    {
        Node *tempLeft = new Node(val);
        Node *tempRight = new Node(val);

        // Attach original left and right children
        tempLeft->left = root->left;
        tempRight->right = root->right;

        // Insert new nodes as left and right children
        root->left = tempLeft;
        root->right = tempRight;

        return;
    }

    // Recur for left and right subtrees
    solve(root->left, d, curr + 1, val);
    solve(root->right, d, curr + 1, val);
}

Node *append(Node *root, int d, int val)
{
    // If depth == 1, we create a new node and make the current root its child
    if (d == 1)
    {
        Node *temp = new Node(val);
        temp->left = root; // Make the current root the left child of new node
        return temp;       // Return new root
    }

    solve(root, d, 1, val); // Start recursion from depth 1
    return root;            // Return the original root (now modified)
}

// * Leaf Similar Trees

vector<int> v1;
vector<int> v2;

void check(Node *root1)
{
    if (!root1->left && !root1->right)
    {
        v1.push_back(root1->data);
        return;
    }
    check(root1->left);
    check(root1->right);
}

void check1(Node *root2)
{

    if (!root2->left && !root2->right)
    {
        v2.push_back(root2->data);
        return;
    }
    check(root2->left);
    check(root2->right);
}
bool LeafSimilar(Node *root1, Node *root2)
{
    if (!root1 && !root2)
        return true;
    if ((!root1 && root2) || (root1 && !root2))
        return false;
    check(root1);
    check1(root2);
    return v1 == v2;
}

// * Maximum Difference between node and the ancestor
void forSingleNode(Node *root, int key, int &diff)
{
    if (root == NULL)
    {
        return;
    }
    diff = max(diff, abs(key - root->val));
    forSingleNode(root->left, key, diff);
    forSingleNode(root->right, key, diff);
}
void solve(Node *root, int &maxDiff)
{
    int diff = INT_MIN;
    forSingleNode(root, root->val, diff);
    maxDiff = max(maxDiff, diff);
    solve(root->left, maxDiff);
    solve(root->right, maxDiff);
}

int diffNode(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int maxDiff = INT_MIN;
    solve(root, maxDiff);
    return maxDiff;
}

// Optimal
void solve(Node *root, int currMax, int currMin, int &diff)
{
    if (!root)
    {
        return;
    }

    currMax = max(currMax, root->val);
    currMin = min(currMin, root->val);

    diff = max(diff, abs(currMax - currMin));

    solve(root->left, currMax, currMin, diff);
    solve(root->right, currMax, currMin, diff);
}

int diffNode(Node *root)
{
    if (!root)
    {
        return 0;
    }
    int diff = 0;
    solve(root, root->val, root->val, diff);

    return diff;
}

// * Maximum Product of Splitted Binary Tree

void sum(Node *root, long long &totalSum)
{
    if (!root)
    {
        return;
    }
    s += root->val;
    sum(root->left, totalSum);
    sum(root->right, totalSum);
}
long long ans = 1;
void helper(Node *root, long long &t, long long totalSum)
{
    if (!root)
    {
        return;
    }
    helper(root->left, t, totalSum);
    helper(root->right, t);
    t += root->val;
    ans = max(ans, abs(totalSum - t) * t);
}

long long productBT(Node *root)
{
    long long totalSum = 0;
    sum(root, totalSum);
    long long t = 0;
    helper(root, t, totalSum);
    cout << ans << endl;
}
