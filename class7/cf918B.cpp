#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   map<string,string> ipName;
   for(int i=0;i<n;i++){
    string name,ip;
    cin>>name>>ip;
    ipName[ip] = name;
   }
   for (int i = 0; i < m; i++)
   {
    string name,ip;
    cin>>name>>ip;
    ip.pop_back();
    cout<<name<<" "<<ip<<"; #"<<ipName[ip]<<endl;
   }
   
}