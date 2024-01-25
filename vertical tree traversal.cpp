#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
};
struct Node *newNode(int data){
	struct Node* node = new Node();
	node->data = data;
	node->left = node->right = NULL;
	return node;
}
void distances(Node *root , int hd , map<int,int>& m){
	if (root==NULL) return;
	m[hd]+=1;
	distances(root->left,hd-1,m);
	distances(root->right,hd+1,m);
}
void verticaltraversal(Node *root){
	map<int,int > m;
	int hd = 0;
	distances(root,hd,m);
	map<int,int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
      	cout << it->second<< " ";
        cout << endl;
    }
}
int main(){
	int n;
//	int Arr[n];
//	Node* head = newNode(-1);
//	Node* p = head;
//	for(int i = 0 ;i < n ; i++)
//	{
//		cin>>A[i];
//		Node *temp = newNode(A[i]);
//		p->Next = temp;
//		p = p->Next;
//	}
	Node* root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(50);
	root->right->left = newNode(60);
	root->right->right = newNode(70);
	verticaltraversal(root);
}
