#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

int gcd(int a, int b){

	while(a!=b){

		if(a==0)
			return b;
		if(b==0)
			return a;
		if(a>b)
			a=a-b;
		else
			b=b-a;

	}

	return a;

}

int main(){

	
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int ans = gcd(6,9);
	cout<< ans;
		

}