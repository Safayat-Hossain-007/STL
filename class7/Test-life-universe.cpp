//https://www.spoj.com/problems/TEST/
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> a ;
     for(int i=0;i<100;i++){
        int x;
        cin>>x;
        a.push_back(x);
        if(a[i]==42){
            break;
        }
     }
     a.pop_back();
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" "<<endl;
     }
    
}