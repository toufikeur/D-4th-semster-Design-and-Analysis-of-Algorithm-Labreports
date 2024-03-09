#include<bits/stdc++.h>
using namespace std;

struct Node {
    int info;
    Node* next;
};

Node* start = nullptr;

void create() {
    Node* temp = new Node();
    if (temp == nullptr) {
       cout << "Out of Memory Space\n";
        exit(0);
    }
    cout << "Enter the data value for the node: ";
    cin >> temp->info;
    temp->next = nullptr;
    if (start == nullptr) {
        start = temp;
    } else {
        Node* ptr = start;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}

void display() {
    Node* ptr = start;
    if (start == nullptr) {
      cout << "List is empty\n";
        return;
    }
   cout << "The List elements are:\n";
    while (ptr != nullptr) {
        cout << ptr->info << " ";
        ptr = ptr->next;
    }
    cout << std::endl;
}

void insert_begin() {
    Node* temp = new Node();
    if (temp == nullptr) {
        cout << "Out of Memory Space\n";
        return;
    }
    cout << "Enter the data value for the node: ";
    cin >> temp->info;
    temp->next = nullptr;
    if (start == nullptr) {
        start = temp;
    } else {
        temp->next = start;
        start = temp;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\nMENU:\n";
        cout << " 1. Create\n";
    cout << " 2. Display\n";
        cout << " 3. Insert at the beginning\n";
        cout << " 4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insert_begin();
                break;
            case 4:
                exit(0);
                break;
            default:
            cout << "\nWrong Choice\n";
                break;
        }
    }
    return 0;
}
