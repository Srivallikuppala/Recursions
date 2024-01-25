#include<bits/stdc++.h>
using namespace std;
//struct Node{
//	int data;
//	Node* next;
//	Node(int data){
//		this->data=data;
//		this->next=NULL;
//	}
//}; 
struct Node {
    int data;
    Node *next;
};
struct Node* newNode(int data)
{
    struct Node* node = new Node;
    node->data = data;
    node->next = NULL;
    return node;
}
int main(){
	int size = 5;
	int Arr[5];
	Node* head = newNode(-1);
	Node* p = head;
	for(int i = 0 ; i < size ; i++){
		cin>>Arr[i];
		Node* temp = newNode(Arr[i]);
		head->next = temp ;
		head = head->next;
	}
	p = p->next;
	while(p!=NULL){
		cout<<p->data<<"->";
		p = p->next;
	}
	cout<<"NULL";
	
	
}
