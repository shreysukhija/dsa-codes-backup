#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

int getPivot(){
	int n;
	vector<int> arr ;
	cin>>n;
	int a;
	
	for(int i =0 ; i<n ;i++){
		cin>>a;
		arr.push_back(a);
	}
	
	
		
	
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else
			e=mid;
		mid=s+(e-s)/2;
	}
	return s;
	

}



int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	//cout<<"hello" ;
	int c = getPivot() ;
	cout<<c<<endl;

}