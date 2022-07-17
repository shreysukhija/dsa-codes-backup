#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
#define endl '\n';

void print(int *p){
	cout<<*p;
}


int main(){

	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	/*int arr[3] = {1,2,3};
	int *p = &arr[0];
	cout << p << endl;
	
	
	int *q = &p;
	cout<<q;
	*/
	int value =5;
	int *p = &value;
	print(p);
	return 0;

	

	
		

}