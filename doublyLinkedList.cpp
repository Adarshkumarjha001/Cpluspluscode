#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertionAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next=head;
    if(head != NULL){
        head->prev=n;
    }

    head = n;
}

void insertionAtTail(Node* &head,int val){
    Node* n = new Node(val);

    if(head == NULL){
        insertionAtHead(head,val);
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp -> next;
    }
    
    temp->next = n;
    n->prev = temp;
}

// void insertionAtTailUsingTail(Node* &tail,int val){
//     Node* n = new Node(val);

//     n->prev = tail;
//     if(tail != NULL){
//         tail->next = n;
//         return;
//     }
//     tail=n;
// }


void display(Node* head){
    Node* temp = head;

    cout<<"NULL->";
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertionAtTail(head,1);
    insertionAtTail(head,100);
    insertionAtTail(head,30);
    insertionAtTail(head,5);
    insertionAtHead(head,77);
    insertionAtHead(head,13);

    display(head);
}
