#include<bits/stdc++.h>
using namespace std;
int main(){
    //Multiset => Element is not unique but elements are kept sorted rest of the operations are like normal set


    //Declaring the multiset and printing out all the elements
    // multiset<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);
    // s.insert(4);
    // s.insert(5);
    // cout<<s.size()<<" "<<endl;
    // for(auto u : s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    // //counting number of elements of the multiset ekahne exactly koyta 1 ache seta count korbe set er motu 1 element ache naki seta boolean output dara detect korbe na
    // cout<<s.count(1)<<endl;

    // //Erasing the element from the multiset
    // //Now deleted all the occurance of the 1
    // //Complexity=> log2(n)
    // s.erase(1);
    // for(auto u : s){
    //     cout<<u<<" ";
    // }
    // cout<<endl;

    
    multiset<int> s={1,1,1,1,2,5,1,4,6};
    //Deleting the first repative element form set
    auto it = s.find(1);
    s.erase(it);
    for(auto u : s){
        cout<<u<<" ";
    }
    cout<<endl;


}