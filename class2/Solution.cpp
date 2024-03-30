// 852. Peak Index in a Mountain Array
// https://leetcode.com/problems/peak-in...

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int peakIndexInMountainArray(vector<int>& A){
        int i = max_element(A.begin(),A.end()) -A.begin();
        return i;

    }
};


/// 1502. Can Make Arithmetic Progression From Sequence
///Link:  https://leetcode.com/problems/can-mak...
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int d = arr[1]-arr[0];
        for(int i = 2; i < arr.size(); i++ ){
            if( arr[i]- arr[i-1] != d) return false;
        }
        return true;
    }
};