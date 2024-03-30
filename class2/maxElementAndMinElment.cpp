#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,5,7,7,1 };
    
    
    //making the vector element unique
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end()) - v.begin();
    for(int i=0;i<sz;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //Finding out the max element form the vector
    //same way tae min element ber kora zay
    vector<int>::iterator it = max_element(v.begin(),v.end());
    cout<<*it<<" "<<endl;

    //sorting in the specific position of the vector
    vector<int>::iterator it = max_element(v.begin()+1,v.begin()+3);
    cout<<*it<<" "<<endl;

    //Finding out the max element index form the vector
    int n = max_element(v.begin(),v.end())-v.begin();
    cout<<n<<" "<<endl;
}