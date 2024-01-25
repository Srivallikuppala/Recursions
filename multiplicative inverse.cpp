#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int biex(int a , int b){
	int res = 1;
	while(b){
		if(a&1){
			b = b-1;
			res*=a;
		}
		else{
			b/=2;
			res*=res;
		}
	}
	return res;
}
int inverse(int b){
	int x = (biex(b,mod-2));
}
int main(){
	int a , b;
	cin>>a>>b;
	cout<<inverse(b);
}
