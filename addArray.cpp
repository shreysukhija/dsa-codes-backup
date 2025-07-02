#include<bits/stdc++.h>
using namespace std ;
#define endl '\n';

int getNum(vector<int> &arr, int n){
    int ans=0;
    int j=0;
    for(int i=n-1;i>=0;i--){
        
        ans= ans + arr[i]*pow(10,j);
        j++;
            
    }
    return ans;
}

vector<int> makeArr(int n){
	dikha
	gdg

	vector<int> ans;
	int temp=0;
	while(n>0){

		temp=n%10;
		ans.push_back(temp);
		n=n/10;

	}
	reverse(ans.begin(),ans.end());
	return ans;

}

int main(){
	
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	vector<int> a={3,4,5};
	int n=3;
	int ans= getNum(a,3);
	cout<< ans<< endl;
	vector<int> ans2 = makeArr(743);
	for(int i=0;i<ans2.size();i++){
		cout<<ans2[i]<<' ';
	}
		

}