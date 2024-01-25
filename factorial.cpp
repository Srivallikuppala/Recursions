#include<bits/stdc++.h>
using namespace std;
int main(){
	int i , j , c , ans = 1;
	cin>>i>>j;
	while(j){
		c+=1;
		if(j&1){
			j = j-1;
			ans*=i;
		}
		else{
			j/=2;
			ans*=ans;
		}
	}
	cout<<ans<<c;
}
