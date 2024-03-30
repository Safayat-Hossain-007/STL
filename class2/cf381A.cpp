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
    
    while(!v.empty()) {

        //1 2 3 4 5 6 7
        se += v.back();
        v.pop_back();
        de += v.back();
        v.pop_back();
        
        
    }
    cout<<endl;

    cout<<se<<" "<<de<<" ";
    
}