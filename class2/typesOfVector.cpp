#include<bits/stdc++.h>
using namespace std;
int main(){
    //2D vector

    vector<vector<int>> v;
    vector<int> a1 = {1,5,6,3,6};
    vector<int> a2 = {2,4,5,6,2,7};
    v.push_back(a1);
    v.push_back(a2);
    for(auto p : v){
        for(auto pr : p){
            cout<<pr<<" ";
            
        }
    }

}