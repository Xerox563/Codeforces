#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a new node with data
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
    }
};

/* Write Code Below */
Node *solve(Node *head)
{
    int k = 4;
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node *curr = head;
    while (curr != NULL && k - 2 > 0)
    {
        k--;
        curr = curr->next;
    }
    Node * temp = curr->next;
    curr->next = curr->next->next;
    delete(temp);
    return head;
}

void printList(Node *node)
{
    while (node != nullptr)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

// Driver code
int main()
{

    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    // Print the original linked list
    cout << "Given Linked list: ";
    printList(head);

    // Function call to return the reversed list
    head = solve(head);

    // Print the reversed linked list
    cout << "\nOutput: ";
    printList(head);

    return 0;
}