#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int cnt[100123];
 int main(){
    //frequency of element in the array
    // vector<int> v ={1,2,4,5,4,2,1};
    // for( auto u : v){
    //     cnt[u]++;
    // }
    // map <string,int> id;
    // id["safayat"] = 1;
    // id["arthur"] =2;
    // id["jake"]=3;
    // id["scare-crow"]=4;
    // cout<<id["scare-crow"]<<endl;

    // map<string,string> gender;
    // gender["safayat"] = "male";
    // gender["jake"]="male";
    // cout<<gender["safayat"]<<" "<<gender["jake"]<<" "<<endl;

    // vector<long long> v ={12312415235,12124177,12312415235,12312415235,1,1,2,2,2};
    // map<long long,int> cnt;
    // // for(int i=0; i < v.size(); i++){
    // //     cnt[v[i]]++;
    // // }
    // // cout << cnt[12312415235] << endl;

    // for(auto u : v){
    //     cnt[u]++;
    // }
    // for(auto p: cnt){
    //     cout<< p.first << " " << p.second << endl;
    // }

    // map<string,int> id;
    // id["safayat"] = 1; ///key value is distinct basis on this keys gets sorted
    // id["dima"] = 3;
    // id["sharif"] = 5;
    // id["prety"] = 6;
    // id["antora"] = 9;
    // for(auto u : id){
    //     cout<<u.first<<" "<<u.second<<endl;
    // }
    // map<int,bool> vis;
    // vector<int> v ={1,2,2,1,3,4,2,3};
    // for(auto p : v){
    //     vis[p] =1;
    // }
    // for(auto p: vis){
    //     cout<<p.first<<" "<<p.second<<" "<<endl;
    // }

    //taking user inputs
    // map<string,int> id;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++ ){
    //     string s;
    //     int d;
    //     cin>>s>>d;
    //     id[s]=d;
    // }


    //using the vector of map
    // vector<map<string,int>> v;
    // map<string,int> m;
    // m["safayat"] =1;
    // v.push_back(m);
    // cout<<v[0]["safayat"]<<" "<<endl;


    //finding out the unique value of the map
    map<int,int> m;
    m[1] =1;
    m[2] =2;
    m[3] =3;
    m[4] =4;
    m[4]=5;
    cout<<m.size()<<endl;


 

 }
 