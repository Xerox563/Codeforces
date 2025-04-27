#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // Node *prev;

    // Constructor to initialize a new node with data
    Node(int new_data)
    {
        data = new_data;
        next = nullptr;
        //  prev = nullptr;
    }
};

/* Implementation using Arrays */
/* Node *head = arr[0];
 Node *back = head;
 for (int i = 1; i < n; i++)
 {
     Node *temp = new Node(arr[i]);
     temp->prev = back;
     back->next = temp;
     prev = temp // prev = prev->next;
 }
 */

/* Write Code Below */
Node *solve(Node *head1, Node *head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;
    Node *dummy = NULL;
    Node *curr = dummy;
    int carry = 0;
    while (curr1 != NULL || curr2 != NULL)
    {
        int sum = carry;
        if (curr1 && curr2)
            sum = curr1->data + curr2->data;
        int newVal = sum % 10;
        Node *temp = new Node(newVal);
        carry = sum / 10;
        curr->next = temp;
        curr = curr->next;
        if (curr1)
            curr1 = curr1->next;
        if (curr2)
            curr2 = curr2->next;
    }

    // leftOver Carry
    if (carry)
    {
        Node *temp = new Node(carry);
        curr->next = temp;
    }
    return dummy->next;
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
    // Linked List-1
    Node *head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    head1->next->next->next = new Node(4);
    head1->next->next->next->next = new Node(5);

    // Linked List-2
    Node *head2 = new Node(5);
    head2->next = new Node(4);
    head2->next->next = new Node(3);
    head2->next->next->next = new Node(4);
    head2->next->next->next->next = new Node(5);

    // Print the original linked list
    cout << "Given Linked list1: ";
    printList(head1);
    cout << endl;
    cout << "Given Linked list2: ";
    printList(head2);

    // Function call to return the reversed list
    head1 = solve(head1, head2);

    // Print the reversed linked list
    cout << "\nOutput: ";
    printList(head1);

    return 0;
}


/*
* Time -> O(max(n1,n2));
* Space -> O(max(n1,n2));  // For Storing the result;
 */