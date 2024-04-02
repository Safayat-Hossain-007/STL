// https://www.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1

#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	    // Code here
	    
	    vector<pair<int,int>> v;
	    for(int i = 0; i < nums.size(); i++){
	        for(int j = 0; j < nums.size(); j++){
	            if( i != j && nums[i] - nums[j] == k ){
	                v.push_back({nums[i],nums[j]});
	            }
	        }
	    }
	    sort(v.begin(),v.end());
	    int size = unique(v.begin(),v.end()) - v.begin();
	    return size;
	}

};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}