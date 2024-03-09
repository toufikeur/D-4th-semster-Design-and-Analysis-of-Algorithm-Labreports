#include<bits/stdc++.h>
using namespace std;


class Linklist{
public:
        int val ;
        Linklist* next;

        Linklist(int data){
            this->val = data;
            this->next = NULL;
        }
};

void InsertAtHead(Linklist *& head, int val){
    Linklist *newNode = new Linklist(val);
    if(head == NULL){
      head = newNode;
      return;
    }
    newNode->next = head;
    head = newNode;
}

void display(Linklist *& head){
  Linklist *tmp = head;
  while(tmp != NULL){
    cout << tmp->val ;
    if(tmp->next != NULL) cout << " -> ";
    tmp = tmp->next;
  }
}

void deleteAnyValue(Linklist *& head, int val){
    Linklist * tmp = head;

}

int main(){
    Linklist *head = NULL;
    cout << "1. Insert At Head\n";
    cout << "2. Insert At Tail\n";
    cout << "3. Display\n";
    cout << "4. Delete ant value\n";
    cout << "5. Exit\n";
    cout << "Enter any option: ";
    int n, val; cin >> n;
    while(true){
        if(n == 1){
          cout << "Enter any value: ";
          cin >> val;
          InsertAtHead(head, val);
        }
        else if(n  == 2){
            cin >> val;
        }
        else if(n == 3){
            display(head);
            cout << endl;
        }
        else if(n == 4){
            cin >> val;
            deleteAnyValue(head, val);
        }
        else{
            return 0;
        }
        cout << "Enter any option: ";
        cin >> n;
    }
}
