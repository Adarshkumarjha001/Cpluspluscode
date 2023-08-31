#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        //constructor method- it is same name as of class
        //it doesn't have any return type
        //it will initialize data and give it a value
        //it will be called automatically
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head,int val){

    Node* n = new Node(val);

    if(head == NULL){
        head = n;
        return;
    }

    // we will create a temp pointer which will first point to head than we will keep moving/iterating it using next pointers till temp will start pointing to null

    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void insertAtHead(Node* &head,int val){
    
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void searchKey(Node* head,int key){
    Node* temp = head;
    int y = 0;
    while(temp != NULL){
        if(temp->data == key){
            cout<<"True"<<endl;
            y+=1;
            break;
        }
        temp = temp->next;
    }
    if(y == 0){
        cout<<"False"<<endl;
    }
}

void deletion(Node* &head, int val){
    Node* temp = head;

    if(head == NULL){
        return;
    }

    if(head->data == val){
        head = head->next;
        delete temp;
        return;
    }

    while(temp->next->data != val){
        temp = temp->next;
    }

    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

void display(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    int key,del;
    Node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,10);
    insertAtHead(head,20);

    display(head);
    cout<<"\nEnter key: ";
    cin>>key;
    searchKey(head,key);
    cout<<"Enter element to be deleted: ";
    cin>>del;
    deletion(head,del);
    display(head);
}
