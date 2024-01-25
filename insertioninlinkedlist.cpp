#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
	Node(int data){
		this->data = data;
		this->next = NULL;
	}
};
int main(){
	Node *head = new Node(1);
	head->next = new Node(2);
	head->next->next = new Node(3);
	head->next->next->next = new Node(4);
	head->next->next->next->next = new Node(5);
	Node *car = NULL;
	int x;
	cin>>x;
	Node *temp = new Node(x);
	temp->next = head;
	head = temp;
	while(head){
		cout<<head->data;
		head = head->next;
	}
	if(car==NULL){
		car = temp;
		cout<<car->next;
	}
}
