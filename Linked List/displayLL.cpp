#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

};

void Rdisplay(Node* p){
    if(p == nullptr){
        return;
    }
    cout<<p->data<<" ";
    Rdisplay(p->next);
}

 int main(){
    int a[6] = {12, 34, 56, 78, 90, 23};
    Node *head = new Node();
    head->data = a[0];
    head->next = nullptr;
    Node *temp = head;
    Node *last;
    last = head;
    for(int i = 1; i< sizeof(a)/sizeof(a[0]); i++){
        Node *newNode = new Node();
        newNode->data = a[i];
        newNode->next = nullptr;
        temp->next = newNode;
        temp = newNode;
        last = newNode;
    }

    Node *p = head;
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;

    cout<<"Recursive Display: ";
    Rdisplay(head);
    cout<<endl;
    return 0;
 }