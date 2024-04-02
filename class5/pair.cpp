#include<bits/stdc++.h>
using namespace std;

struct pair1{
    int first,second;
};

int main(){
    // pair1 q;
    // q.first = 2;
    // q.second = 3;


    // //same way pair oo kaj kore
    // pair<int,int> p;
    // p.first =2;
    // p.second =3;

    // pair<string,int> r;
    // r.first = "safayat";
    // r.second = 1;


    // pair<string,vector<int>> s;
    // s.first ="jake";
    // s.second ={2,4,5,6};
    // //cout<<s.first<<endl;
    // for(auto p : s.second){
    //    // cout<<p<<" ";
    // }


    // //making two elements pair
    // //pair combines two variable one with others
    // pair<int,int> p1;
    // p1 = make_pair(2,3);
    // p1.first++;
    // cout<<p1.first<<" "<<p1.second<<" "<<endl;


    //another way initialize to pair
    // pair<string,vector<int>> p;
    // p ={"safayat",{2,4,5}};
    // cout<<p.first<<" "<<p.second.size()<<" ";


    //comparison between two pairs
//     pair<int,int> p1,p2;
//     p1 ={3,5};
//     p2 ={1,6};
//     if(p1<p2){
//         cout<<"yes\n";
//     }else{
//         cout<<"no\n";
//     }

//    //finding out the min value between two pairs
//    pair<int,int> p = min(p1,p2);
//    cout<<p.first<<" "<<p.second<<" "<<endl;

//    //finding out the max value
//    pair<int,int> r = max(p1,p2);
//    cout<<r.first<<" "<<r.second;

   
   //sorting out a pair of vectors non-decreasing order
    // vector<pair<int,int>> v;
    // v.push_back({2,3});
    // v.push_back({1,7});
    // v.push_back({3,3});
    // v.push_back({5,9});
    // v.push_back({1,3});
    // v.push_back({9,7});
    // sort(v.begin(),v.end());
    // for(auto p : v){
    //     cout<<p.first<<" "<<p.second<<" "<<endl;
    // }

    // //sorting out values in non-increasing order
    // sort(v.rbegin(),v.rend());
    // for(auto p : v){
    //     cout<<p.first<<" "<<p.second<<" "<<endl;
    // }

    //using pair of arrays
    // pair<int,int> p[] = {{1,2},{5,7},{8,9}};
    // sort(p,p+3);
    // for(auto s:p){
    //     cout<<s.first<<" "<<s.second<<" "<<endl;
    // }
    

    //sorting out a pair consisting of a string and int
    // vector<pair<string,int>> v;
    // v.push_back({"safayat",5});
    // v.push_back({"hossain",2});
    // v.push_back({"jake",15});
    // v.push_back({"mike",5});
    // v.push_back({"batman",25});
    // v.push_back({"safayat",5});

    // sort(v.begin(),v.end());
    // for( auto p : v){
    //    // cout<<p.first<<" "<<p.second<<" "<<endl;
    // }

    // //sorting out the pair uniquely
    // int size = unique(v.begin(),v.end())-v.begin();
    // for(int i=0;i<size;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<" "<<endl;

    // }

    // pair<int,int> p;
    // cin>>p.first>>p.second;
    // cout<<p.first<<" "<<p.second<<endl;



}