#include<bits/stdc++.h>
using namespace std;
int arraySorted(int *arr , int n){
//	if(n==1 || n==0)return true;
//	if(arr[0]<arr[1] && arraySorted(arr+1,n-1)){
//		return true;
//	}
//	return false;
//	}
	if(n == 1 || n == 0) return true;
	if(arr[0]>arr[1]) return false;
	bool s = arraySorted(arr+1,n-1);
	return s;
}
int main(){
	int n = 5;
	int arr[5] = {1,2,2,3,5};
	cout<<arraySorted(arr,n);
}
