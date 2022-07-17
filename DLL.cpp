#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

class Node{

public:
	int data;
	Node* prev;
	Node* next;

	Node(int data){

		this -> data = data;
		this -> prev = NULL;
		this -> next = NULL;

	}

	~Node(){

		if(next != NULL){

			delete next;
			next = NULL;

		}

	}

};

void print(Node* &head){

	Node* current = head;

	while (current != NULL){

		cout<< current -> data << " ";
		current = current -> next;

	}

	cout << endl;

}

int length( Node* &head){

	Node* current = head;
	int len = 0;

	while(current != NULL){

		len++;
		current = current -> next;

	}

	return len;

}

void insertAtHead(Node* &head, Node* &tail, int data){

	if(head == NULL){

		Node* temp = new Node(data);
		head = temp;
		tail = temp;

	}

	else{

		Node* temp = new Node(data);
		temp -> next = head;
		head -> prev = temp;
		head = temp;	

	}


}

void insertAtTail(Node* &head, Node* &tail, int data){

	if(tail == NULL){

		Node* temp = new Node(data);
		tail = temp;
		head = temp;

	}

	else{

		Node* temp = new Node(data);
		temp -> prev = tail;
		tail -> next = temp;
		tail = temp;

	}


}

void insertAtPos(Node* &head, Node* &tail, int data, int position){

	if(position == 1){

		insertAtHead(head, tail, data);
		return;

	}

	Node* current = head;
	int count = 1;

	while(count < position - 1){

		count++;
		current = current -> next;

	}

	if(current -> next == NULL){

		insertAtTail(head, tail, data);
		return;

	}

	Node* nodeToInsert = new Node(data);
	nodeToInsert -> next = current -> next;
	current -> next -> prev = nodeToInsert;
	current -> next = nodeToInsert;
	nodeToInsert -> prev = current;

}

void deleteNode(int position, Node* &head, Node* &tail){

	if(position == 1){

		Node* current = head;
		head = head -> next;
		current -> next -> prev = NULL;
		current -> next = NULL;
		delete current;

	}



	else{

		Node* temp = NULL;
		Node* current = head;
		int count = 1;
		while(count < position){

			temp = current;
			current = current -> next;
			count++;

		}

		if(current-> next == NULL){

			tail = current -> prev;
			current -> prev = NULL;
			temp -> next = NULL;
			delete current;
			return;

		}

		temp -> next = current -> next;
		current -> next -> prev = temp;
		current -> next = NULL;
		current -> prev = NULL;
		delete current;

	}

	

}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	Node* head = NULL;
	Node* tail = NULL;

	insertAtHead(head, tail, 1);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;

	insertAtTail(head, tail, 2);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;

	insertAtPos(head, tail, 3, 2);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;

	insertAtPos(head, tail, 4, 1);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;

	insertAtPos(head, tail, 7, 5);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;	

	deleteNode(5, head, tail);
	print(head);
	cout<<"head-" <<head -> data << " "<< "tail-"<< tail -> data << endl;

		

}