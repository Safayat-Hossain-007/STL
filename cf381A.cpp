#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int se=0;
    int de=0;
    vector<int> v;
    for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.push_back(k);
    }
    
    sort(v.begin(),v.end());
    for(auto p:v){
        cout<<p<<" ";
    }
    cout<<endl;
    
    for(int i = 0; i<n; i++){
        if(i)
        se += v.back();
        v.pop_back();
        cout<<se<<" ";
        de += v.back();
        v.pop_back();
        cout<<de<<" ";
        
    }
    cout<<endl;

    cout<<se<<" "<<de<<" ";
    
}