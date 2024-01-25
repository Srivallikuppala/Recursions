#include<bits/stdc++.h>
using namespace std;
int main(){
	int n , sizes , c , v , t = 1;
	cin>>n;
	vector <int> x;
	x.push_back(1);
	for(int i = 1 ;i < n+1 ; i++){
		int j = 0;
		sizes = t;
		c = 0;
		while(sizes>j){
			v = (x[j]*i)+c;
			c = (v)/10;
			x[j] = v%10;
			j +=1;
		}
		while(c>0){
			x.push_back(c%10);
			c = c/10;
			t+=1;
		}
	}
	for(int i = x.size()-1 ; i>-1 ;i--){
		cout<<x[i];
	}
}
