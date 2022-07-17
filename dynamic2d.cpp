#include<bits/stdc++.h>
#include<iostream>
using namespace std ;
#define endl '\n';

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int row;
	cin>> row;

	int col;
	cin>> col;

	int** arr = new int*[row];

	for(int i=0;i<row;i++)
		arr[i]= new int[col];

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>> arr[i][j];
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<< arr[i][j]<<' ';
		}
		cout<<endl;
	} 

	for(int i=0;i<row;i++)
		delete[] arr[i];

	delete[] arr;



	

		

}