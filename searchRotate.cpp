#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

int binarySearch(vector<int> arr, int start, int end, int key){
	
	int s=start;
	int e=end;
	int mid=s+(e-s)/2;

	while(s<=e){
			if(arr[mid]==key){
				return mid;
			}
			if(arr[mid]>key){
				e=mid-1;

			}
			if(arr[mid]<key)
				s=mid+1;
			mid=s+(e-s)/2;
		}
	return -1;
}

int searchRotate(){

	int n;
	int key;
	cin>>n;
	cin>> key;
	vector<int> arr;
	int a;
	int r;
	for(int i=0;i<n;i++){
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
	


	
	if(key>=arr[s]&&key<=arr[n-1])
		return binarySearch(arr,s,n-1,key);
	else
		return binarySearch(arr,0,s-1,key);
	

}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		
	int c = searchRotate();
	cout<<c<<endl;

}