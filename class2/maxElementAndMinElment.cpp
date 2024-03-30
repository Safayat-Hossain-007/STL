#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,5,7,7,1 };
    
    
    //making the vector element unique
    sort(v.begin(),v.end());///complexity O(nlogn)
    int sz = unique(v.begin(),v.end()) - v.begin();
    for(int i=0;i<sz;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //finding out the min element from the vector
    vector<int>::iterator it = min_element(v.begin(),v.end());//complexity O(n)
    cout<<*it<<" "<<endl;


 

    //Finding out the max element form the vector
    //same way tae min element ber kora zay
    vector<int>::iterator it2 = max_element(v.begin(),v.end());
    cout<<*it2<<" "<<endl;

    //sorting in the specific position of the vector
    vector<int>::iterator it3 = max_element(v.begin()+1,v.begin()+3);
    cout<<*it3<<" "<<endl;

    //Finding out the max element index form the vector
    int n = max_element(v.begin(),v.end())-v.begin();
    cout<<n<<" "<<endl;
}