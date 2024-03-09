#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

struct node *head = NULL;

void insertAtTop(int new_data)
{
    struct node *new_node = new node;
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
}

void insertAtTail(int new_data)
{
    struct node *new_node = new node;
    new_node->data = new_data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = new_node;
}

void insertInMiddle(int new_data, int position)
{
    if (position <= 0)
    {
        cout << "Invalid position.\n";
        return;
    }

    if (position == 1 || head == NULL)
    {
        insertAtTop(new_data);
        return;
    }

    struct node *new_node = new node;
    new_node->data = new_data;

    struct node *ptr = head;
    int count = 1;
    while (ptr != NULL && count < position - 1)
    {
        ptr = ptr->next;
        count++;
    }

    if (ptr == NULL)
    {
        cout << "Invalid position.\n";
        return;
    }

    new_node->next = ptr->next;
    ptr->next = new_node;
}

bool search(int value)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == value)
            return true;
        ptr = ptr->next;
    }
    return false;
}

void display()
{
    node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main()
{
    int option;
    while (true)
    {
        cout << "Enter option: 1. Insert at Top \n2. Insert at Tail \n3. Insert in Middle \n4. Search \n5. Display\n6.Exit\n";
        cin >> option;

        if (option == 1)
        {
            int data;
            cout << "Enter value to insert at top: ";
            cin >> data;
            insertAtTop(data);
            cout << "Value inserted at top.\n";
        }
        else if (option == 2)
        {
            int data;
            cout << "Enter value to insert at tail: ";
            cin >> data;
            insertAtTail(data);
            cout << "Value inserted at tail.\n";
        }
        else if (option == 3)
        {
            int data, position;
            cout << "Enter value to insert: ";
            cin >> data;
            cout << "Enter position to insert at: ";
            cin >> position;
            insertInMiddle(data, position);
            cout << "Value inserted at position " << position << ".\n";
        }
        else if (option == 4)
        {
            int value;
            cout << "Enter value to search: ";
            cin >> value;
            if (search(value))
                cout << "Value found.\n";
            else
                cout << "Value not found.\n";
        }
        else if (option == 5)
        {
            cout << "Values are: \n";
            display();
        }

        else if (option == 6)
        {
            break;
        }
        else cout << "Insert a number\n";
    }
}
