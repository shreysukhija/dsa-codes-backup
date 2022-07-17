#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';


int sqRt(int end){
	int s=0;
	int e=end;
	int ans=0;
	int mid= s+(e-s)/2;
	while(s<e){
		if(mid*mid>end){
			e=mid-1;
		}
		if(mid*mid<end){
			ans=mid;
			s=mid+1;
		}	
		if(mid*mid==end)
			return mid;
		mid=s+(e-s)/2;
	}
	return ans;
}

int input(){
	int n;
	cin>>n;
	return n;
}


int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int n=input();
	int c= sqRt(n);
	cout<<c<<endl;

}