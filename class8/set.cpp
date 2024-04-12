#include<bits/stdc++.h>
using namespace std;
int main(){
    // set<int> s ={2,3,5,2,3,1,4};
    // cout<<"size of the set is : "<<s.size()<<endl;
    
    // cout<<"printing all elements of the set";
    // cout<<endl;
    // for(auto u:s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;
    // cout<<"Using the iterators to print the elments of the set";
    // cout<<endl;
    // set<int>::iterator it;
    // for(it=s.begin();it!=s.end();it++){
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // s.clear();
    // cout<<"checking if the set is empty"<<endl;
    // cout<<s.empty();
    // cout<<endl;
    // cout<<"Inserting elements into the set"<<endl;
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // s.insert(5);
    // s.insert(6);
    // cout<<"printing out the size of the set"<<endl;
    // cout<<s.size()<<endl;
    // cout<<"Printing out all the elements of the set"<<endl;
    // for(auto u: s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    // // 2 koybar asche ta check korbo
    // cout<<"Checking if 2 is present in the set"<<endl;
    // cout<<s.count(2)<<endl;
    
    // //sobar smaner element ki 
    // cout<<"printing out the first element fo the set"<<endl;
    // cout<<*s.begin()<<endl;
    // cout<<"printing out the last element fo the set"<<endl;
    // cout<<*--s.end()<<endl;
    // cout<<endl;
    // cout<<*(s.rbegin())<<endl;
    

    
    // set<int> s;
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(4);
    // s.insert(5);
    // //printing all the elements of the set
    // for(auto u:s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;
    // //deleting the staring element of the set
    // s.erase(s.begin());
    // for(auto u: s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;
    // //deleting the last element
    // s.erase(--s.end());
    // for(auto u:s){
    //     cout<<u<<" ";
    // }


    //set er string
    //string gula lexiographically sorted ar unique thakbe
    // set<string> s;
    // s.insert("safayat");
    // s.insert("Mike Tyson");
    // s.insert("Max");
    // s.insert("louis");
    // s.insert("safayat");
    // s.insert("Mike Tyson");
    // s.insert("Max");
    // s.insert("louis");
    // cout<<"size of the set : "<<s.size()<<endl;
    // for(auto u:s){
    //     cout<<u<<" "<<endl;
    // }
    // cout<<endl;


    //set of pairs of integers
    //set first first value kae unique kore sort korbe
    //then second value kae unique kore take sort korbe
    // set<pair<int,int>> s;
    // s.insert({2,3});
    // s.insert({4,1});
    // s.insert({4,1});
    // s.insert({4,3});
    // s.insert({5,1});
    // s.insert({5,1});
    // s.insert({4,4});
    // cout<<s.size()<<endl;
    // for(auto u : s){
    //     cout<<u.first<<" "<<u.second<<" "<<endl;
    // }
    // cout<<endl;

    //sorting elements in reverse order
    // set<int,greater<int>> s;
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // for(auto u : s){
    //     cout<<u<<" "<<endl;
    // }
    // cout<<endl;


    //also doing it for the string
    //capital letter sob theke chotu
    // set < string, greater<string> > s; 
    // s.insert("safayat");
    // s.insert("louis");
    // s.insert("beast");
    // s.insert("logan");
    // s.insert("safayat");
    // s.insert("beast");
    // s.insert("logan");
    // for(auto u : s){
    //     cout<<u<<" "<<endl;
    // }
    // cout<<endl;


    //pair of integer kae desending order e sort korar way

    // set<pair<int,int>,greater<pair<int,int>>> s;
    // s.insert({2,3});
    // s.insert({1,2});
    // s.insert({4,2});
    // s.insert({2,3});
    // s.insert({1,2});
    // s.insert({4,2});
    // s.insert({2,3});
    // s.insert({1,2});
    // s.insert({4,2});
    // for(auto u: s){
    //     cout<<u.first<<" "<<u.second<<" "<<endl;
    // }
    // cout<<endl;

    //unordered set unique korbe kintu sort korbe na 
    unordered_set<int> us={2,4,6,3,5,3,2};
    for(auto u: us){
        cout<<u<<" ";
    }
    cout<<endl;
    
}