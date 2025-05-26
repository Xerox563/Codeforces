#include <iostream>
#include <vector>
#include <queue>

using namespace std;

const int MAX_NODES = 1e5 + 10;

// Stores the type of each node (0, 1, or 2)
int nodeType[MAX_NODES];
// Adjacency list to represent the tree
vector<int> tree[MAX_NODES];
// Marks nodes as visited during traversal
bool isNodeVisited[MAX_NODES];

// Keeps track of counts of types at leaf nodes
int leafTypeCount[3];
// Tracks count of nodes with specific properties
int specialNodeCount = 0;

// Perform BFS to simulate the traversal
void bfsTraversal(int startNode)
{
    queue<int> q;
    q.push(startNode);
    isNodeVisited[startNode] = true;

    while (!q.empty())
    {
        int currentNode = q.front();
        q.pop();

        int children = 0;
        for (int neighbor : tree[currentNode])
        {
            if (!isNodeVisited[neighbor])
            {
                isNodeVisited[neighbor] = true;
                q.push(neighbor);
                children++;
            }
        }

        // If it's a leaf node
        if (children == 0)
        {
            leafTypeCount[nodeType[currentNode]]++;
        }
        // If it's a special node
        else if (currentNode != 1 && nodeType[currentNode] == 2)
        {
            specialNodeCount++;
        }
    }
}

// Calculate the result based on nodeType of root and leafTypeCounts
int calculateResult(int rootNodeType)
{
    if (rootNodeType == 0)
    {
        return leafTypeCount[1] + (leafTypeCount[2] + 1) / 2;
    }
    else if (rootNodeType == 1)
    {
        return leafTypeCount[0] + (leafTypeCount[2] + 1) / 2;
    }
    else if (rootNodeType == 2)
    {
        if (leafTypeCount[0] == leafTypeCount[1])
        {
            return leafTypeCount[1] + (leafTypeCount[2] + (specialNodeCount % 2)) / 2;
        }
        else
        {
            return max(leafTypeCount[0], leafTypeCount[1]) + leafTypeCount[2] / 2;
        }
    }
    return 0;
}

void processSingleTestCase()
{
    int nodeCount;
    cin >> nodeCount;

    // Reset data structures
    fill(begin(isNodeVisited), begin(isNodeVisited) + nodeCount + 1, false);
    fill(begin(leafTypeCount), end(leafTypeCount), 0);
    specialNodeCount = 0;
    for (int i = 1; i <= nodeCount; ++i)
    {
        tree[i].clear();
    }

    // Read the edges of the tree
    for (int i = 1; i < nodeCount; ++i)
    {
        int nodeA, nodeB;
        cin >> nodeA >> nodeB;
        tree[nodeA].push_back(nodeB);
        tree[nodeB].push_back(nodeA);
    }

    // Read node types and handle '?' as special type 2
    string types;
    cin >> types;
    for (int i = 0; i < nodeCount; ++i)
    {
        nodeType[i + 1] = (types[i] == '?') ? 2 : (types[i] - '0');
    }

    // Perform BFS starting from the root node
    bfsTraversal(1);

    // Compute the final result
    int finalResult = calculateResult(nodeType[1]);
    cout << finalResult << '\n';
}

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        processSingleTestCase();
    }
}
