#include<bits/stdc++.h>
using namespace std;
int fact(int n){
	if(n==0)return 1;
	int s = fact(n-1);
	return s*n;
	}
int main(){
	int i = 4;
	cout<<fact(i);
}
