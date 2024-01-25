#include<bits/stdc++.h>
using namespace std;
int firstOcc(int *arr , int n , int k){
	if(n==0)return -1;
	if(arr[0]==k) return 1;
	int s = firstOcc(arr+1,n-1,k);
	if(s==-1) return -1;
	else return s+1;
}
int main(){
	int n = 5;
	int k = 6;
	int arr[5] = {1,2,6,3,5};
	cout<<firstOcc(arr,n , k);
}
