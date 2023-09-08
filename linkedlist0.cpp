#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert(Node* &head,int val){
    
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

Node* merge(Node* &head1, Node* &head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* n;
    Node* val;

    while(temp1 != NULL){
        if(temp1->data < temp2->data && temp2->data <= temp1->next->data){
            cout<<"in"<<endl;
            val = new Node(temp2->data);
            n = temp1->next;
            temp1->next = val;
            val->next = n;
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        else{
            temp1 = temp1->next;
        }
    }

    return head1;
}

int display(Node* head){
    Node* temp = head;

    int count = 0;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
        count++;
    }
    cout<<"NULL";

    return count;
}

int main(){
    Node* head1 = NULL;
    Node* head2 = NULL;
    int length[2];

    // insert(head2,6);
    insert(head1,5);
    insert(head1,4);
    insert(head1,1);
    insert(head2,5);
    insert(head2,3);
    insert(head2,2);
    length[0] = display(head1);
    cout<<endl;
    length[1] = display(head2);
    cout<<endl;
    if(length[0] >= length[1]) display(merge(head1,head2));
    if(length[0] < length[1]) display(merge(head2,head1));
}
