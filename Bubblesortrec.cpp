#include<bits/stdc++.h>
using namespace std;
void Bubblesort(int i , int* arr , int n){
	if(n == 1) return;
	if(i==n-1){
		Bubblesort(0,arr,n-1);
		return;
	}
	if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
	Bubblesort(i+1,arr,n);
	return;
};
int main(){
	int n ;
	cin>>n;
	int arr[n];
	for(int i = 0 ; i < n ; i++){
		cin>>arr[i];
	}
	Bubblesort(0 , arr , n);
	for(int i = 0 ; i < n ; i++){
		cout<<arr[i]<<" ";
	}
}
