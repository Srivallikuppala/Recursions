#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "textbook";
	int l = s.size();
    int x1 = 0 , y1 = 0;
    string x = "aeiouAEIOU";
    for(int i= 0 ; i<l/2 ; i++){
    	auto it = find(x.begin(),x.end(),s[i]);
        if (it.find()!=end) x1+=1;
        if (x.find(s[l-i-1])==0) y1+=1;
        cout<<x.find(s[i])<<s[l-i-1];
        cout<<x1<<y1;
        cout<<endl;
    }
    if(x1==y1) cout<<"true";
    else cout<<"false";
}
