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
    Node *dummy = new Node(-1);
    Node *odd = head;
    Node *even = head->next;
    Node *evenHead = head->next;
    while (even != NULL && even->next != NULL)
    {
        odd->next = odd->next->next;
        even->next = even->next->next;

        odd = odd->next;
        even = even->next->next;
    }
    odd->next = evenHead;
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