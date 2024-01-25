#include<bits/stdc++.h>
using namespace std;
void merge(int low , int high , int mid , vector<int>&vct){
	int i = low , j = mid+1;
	vector<int>temp;
	while(i<=mid and j<=high){
		if(vct[i]>vct[j]) temp.push_back(vct[j++]);
		else temp.push_back(vct[i++]);
	}
	while(i<=mid) temp.push_back(vct[i++])
	while(j<=high) temp.push_back(vct[j++]);
	for(int i = low ; i <= high ; i++) vct[i]=temp[i-low];
	return;
};
void MergeSort(int low , int high , vector<int>&vct){
	if(high<=low) return;
	int mid = low+(high-low)/2;
	MergeSort(low,mid,vct);
	MergeSort(mid+1,high,vct);
	merge(low,high,mid,vct);
	return;	
};
int main(){
	int n , x ;
	cin>>n;
	vector<int>vct;
	for(int i = 0 ; i < n ; i++){
		cin>>x;
		vct.push_back(x);
	}
	MergeSort(0,n-1,vct);
	for(int i = 0 ; i < n ; i++) cout<<vct[i]<<" ";
}
