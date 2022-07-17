#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

void map1(){
	map<int,string> m;
	m[1]="shrey";
	m[2]="sukhija";
	m[17]="kumar";
	m.insert({3,"nath"});

	for(auto i:m){
		cout<<i.first<<" "<<i.second<<endl;
	}
	endl;
	auto it= m.find(3);
	for(auto i=it;i!=m.end();i++){
		cout<<(*i).first<<endl;
	}



}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	map1();

}