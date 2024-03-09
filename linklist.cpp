#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
}

int
main()
{
    Node *head = NULL;
    Node *newNode = new Node(5);
    head = newNode;

    cout << head->val << endl;
}