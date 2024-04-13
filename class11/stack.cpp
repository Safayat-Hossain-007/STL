#include<bits/stdc++.h>
using namespace std;
int main(){
    
    
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    //size of the stack
    cout<<st.size()<<endl;

    //sobar uporer element ki ache ta dekhi
    // cout<<st.top()<<endl;

    //deleting the elements from the stack
    //st.pop();
    //cout<<st.top()<<" "<<endl;

    //print out all the elements of the stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}