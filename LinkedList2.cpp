#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node* next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void insertAtHead(node* &head,int data){
	if(head == NULL){
		node* n1 = new node(data);
		head = n1;
		return ;
	}
	node* newNode = new node(data);
	newNode -> next = head;
	head = newNode;
}
void insertAtTail(node* &head,int data){
	node* newNode = new node(data);
	node* temp = head;
	while(temp->next !=NULL){
		temp = temp -> next;
	}
	temp -> next = newNode;
	newNode -> next = NULL;
}
void insertAtValue(node* &head,int val,int data){
	node* newNode = new node(data);
	node* temp = head;
	while(temp->data != val){
		temp = temp -> next;
	}
	newNode -> next = temp -> next;
	temp -> next = newNode;
}
void insertAtPosition(node* &head,int position,int data){
	node* newNode = new node(data);
	node* temp = head;
	for(int i=0;i<position-2;i++){
		temp = temp->next;
	}
	newNode -> next = temp -> next;
	temp -> next = newNode;	
}
void deleteAtHead(node* &head){
	node* temp = head;
	head = temp -> next;
	temp -> next = NULL;
	delete temp;
}
void deleteAtTail(node* &head){
	node* temp = head;
	while(temp -> next -> next!=NULL){
		temp = temp -> next;
	}
	node* nodeToDelete = temp -> next;
	temp -> next = NULL;
	delete nodeToDelete;
}
void print(node* &head){
	node* temp = head;
	while(temp != NULL){
		cout << temp -> data << "->";
		temp = temp -> next;
	}
	cout << "NULL";
}
int main(){
	node* head = NULL;
	insertAtHead(head,10);
	insertAtHead(head,5);
	insertAtTail(head,15);
	print(head);
//	cout << n1->data << endl; 
//	cout << n1->next << endl;
}
