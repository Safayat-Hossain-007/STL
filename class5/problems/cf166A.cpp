#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &p1,const pair<int,int>&p2){
  if(p1.first > p2.first) return 1;
  else if(p1.first == p2.first) return (p1.first < p2.first);
  return 0;
  
}
int  main(){
    vector<pair<int,int>> v ;
    v.push_back({4,143});
    v.push_back({3,120});
    v.push_back({4,500});
    v.push_back({1,20});
    sort(v.begin(),v.end(),cmp);
    for(auto c : v){
        cout<<c.first<<" "<<c.second<<" "<<endl;
    }

}