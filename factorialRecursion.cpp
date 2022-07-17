#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

int factorial(int n){

	//base case
	if(n==0)
		return 1;
	/*
	int smallProblem = factorial(n-1);
	int bigProblem = n * smallProblem;

	return bigProblem;
	*/

	//simpler form->

	return n * factorial(n-1);
}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n;
	cin>>n;
	int ans = factorial(n);
	cout<< ans;		

}