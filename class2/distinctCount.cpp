#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n>>x;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            // int f;
            // cin>>f;
            // v.push_back(f);
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int size = unique(v.begin(),v.end())-v.begin();
        if( size == x){
            cout<<"Good"<<endl;
        }else if(size < x){
            cout<<"Bad"<<endl;
        }
        else {
            cout<<"Average"<<endl;
        }

    }
    return 0;
}