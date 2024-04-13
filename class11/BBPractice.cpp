#include<bits/stdc++.h>
using namespace std;
bool isBalanced(char s1,char s2){
    return ((s1 == '(' && s2 == ')') || (s1 == '{' && s2 == '}') || (s1 == '[' && s2 == ']'));
}
int main(){
    int n;
    cin >> n;
    bool done;
    while(n--){
        string s;
        cin>>s;
        stack<char> st;
        done = 1;
        for(auto u : s){
            if(u == '(' || u == '{' || u =='['){
                st.push(u);
            }else{
                if(st.empty()){
                    done = 0;
                    break;
                }
                else{
                    if(isBalanced(st.top(),u)){
                        st.pop();
                    }
                    else{
                        done = 0;
                        break;
                    }
                }
            }
        }
        if(!st.empty()){
            done = 0;
        }
        if(done){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
}

// Test cases: 
// 2 [{()}] {(])} 
//output: yes no