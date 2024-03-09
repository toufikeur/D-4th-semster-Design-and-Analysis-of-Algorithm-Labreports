#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int x) {
        val = x;
        next = nullptr;
    }
};
Node* create(Node* root){
    int x;
    cout << "Enter value : ";
    cin >> x;
    Node* newNode = new Node(x);
    if(!root) {
        return newNode;
    }
    else{
        Node *temp = root;
        while(temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return root;
}
void insertAtTail(Node* root) {
    int x;
    cout << "Enter value : " ;
    cin >> x;
    Node *newNode = new Node(x);
    Node* temp = root;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = newNode;
    return ;
}
void insertAtpositon(Node* root, int pos) {
    Node* pre, *post, *temp;
    while(--pos) {
        pre = root;
        root = root->next;
    }
    cout << "Enter value : ";
    int x;
    cin >> x;
    Node* newNode = new Node(x);
    pre->next = newNode;
    newNode->next = root;
}
Node* insertAtFirstPostion(Node* root) {
    int x;
    cout << "Enter value : ";
    cin >> x;
    Node* newNode = new Node(x);
    newNode->next = root;
    return newNode;
}
void traversal(Node* root) {
    while(root!=nullptr) {
        cout << root->val << " ";
        root = root->next;
    }
    cout << "\n";
}
void search(Node* root) {
    int x, flag = 0;
    cout << "Enter the value to search : ";
    cin >> x;
    while(root){
        if(root->val==x){
            flag = 1;
            break;
        }
        root = root->next;
    }
    if(flag) cout << "Element found\n";
    else cout << "Elemen not found\n";
}
Node* deletion(Node* root) {
    Node *temp = root, *prev = root;
    cout << "Enter node position :";
    int pos;
    cin >> pos;
    if(pos == 1){
        temp = root->next;
        free(root);
        return temp;
    }
    else{
    while(--pos) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    }
    return root;

}
int main() {
    int choice, flag = 1;
    Node* root = nullptr;
    while(flag) {
    cout << "Enter choice 1. Create link list 2. Insert at tail 3. Insert at position 4. Insert at head 5. Travarse 6. Search 7. Deletion 8. Exit" << "\n";
    cin >> choice;
    switch(choice) {
        case 1: root = create(root);
                break;
        case 2: insertAtTail(root);
                break;
        case 3: int pos;
                cout << "Eneter position ";
                cin >> pos;
                insertAtpositon(root,pos);
                break;
        case 4: root = insertAtFirstPostion(root);
                break;
        case 5: traversal(root);
                break;
         case 6: search(root);
                  break;
         case 7: root = deletion(root);
                  break;
        case 8: flag = 0;
                break;

    }
    }
}
