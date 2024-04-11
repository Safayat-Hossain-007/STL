#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v ={1,1,2,2,3,3};
    sort(v.begin(),v.end());//O(nlog2(n)
    
    int size = unique(v.begin(),v.end()) - v.begin(); //O(n)
    cout<<size<<endl;
   
    for(int i = 0;i<size;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}