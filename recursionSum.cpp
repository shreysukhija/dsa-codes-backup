#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';


int sumOf(vector<int> arr, int size){

	if(size==0)
		return 0;
	if(size==1)
		return arr[0];
	int remain = sumOf(arr.begin()+1,size-1);
	int sum = arr[0] + remain;
	return sum;


}



int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	vector<int> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){

		int a;
		cin>>a;
		arr.push_back(a);
	}

	for(int i=0;i<n;i++){

		cout<<arr[i]<<' ';

	}

	cout<< endl;
	
	int ans = sumOf(arr, n);
	cout<< ans;




		

}