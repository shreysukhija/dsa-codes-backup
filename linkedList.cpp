#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

class Node{

public:
	int data;
	Node* next;

	Node(int data){

		this-> data = data;
		this -> next = NULL;

	}

	~Node(){

		if(this->next != NULL){

			delete next;
			this -> next = NULL;

		}

	}

};

void insertAtHead(Node* &head, int data){

	Node* temp = new Node(data);
	temp->next = head;
	head = temp;

}

void insertAtTail(Node* &tail, int data){

	Node* temp = new Node(data);
	tail->next = temp;
	tail = temp;

}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){

	//if position is 1st
	if(position==1){

		insertAtHead(head, data);
		return;

	}

	Node* nodeToInsert = new Node(data);
	Node* temp = head;
	int count = 1;
	while(count < position - 1){

		temp = temp->next;
		count++;

	}
	//if position is last
	if(temp->next == NULL){

		insertAtTail(tail, data);
		return;
	}
	nodeToInsert->next = temp -> next;
	temp -> next = nodeToInsert;
	


}

void deleteNode(int position, Node* &head){

	if(position == 1){

		Node* temp = head;
		head = head->next;
		temp -> next = NULL;
		delete temp;

	}

	else{

		Node* prev = NULL;
		Node* current = head;
		int count = 1;
		while(count < position){

			prev = current;
			current = current -> next;
			count++;

		}

		prev-> next = current-> next;
		current -> next = NULL;
		delete current;

	}

	

}

void print(Node* &head){

	Node* temp = head;
	while(temp != NULL){

		cout<< temp->data << " ";
		temp = temp->next;


	}

	cout << endl;

}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	Node* node1 = new Node(10);
	Node* node2 = new Node(20);

	Node* head = node1;
	Node* tail = node1;

	//insertAtHead(node1, 25);
	insertAtHead(head, 25);


	//print(node1);
	print(head);


	insertAtTail(tail, 23);
	print(head);
	insertAtPosition(head, tail, 4 , 37);
	print(head);

	deleteNode(3, head);
	print(head);



}