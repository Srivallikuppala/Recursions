#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==0 or n==1)return n;
	int smallAns1 = fib(n-1);
	int smallAns2 = fib(n-2);
	return smallAns1+smallAns2;
	}
int main(){
	int i = 8;
	cout<<fib(i);
}
