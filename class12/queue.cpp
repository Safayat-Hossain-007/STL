#include<bits/stdc++.h>
using namespace std;
int main(){

    //queue and stack er moddhe kono iterator use kora zay na

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // cout<<"Size of the queue"<<q.size()<<" "<<endl;
    // //front element kae print korlam
    // cout<<q.front()<<" "<<endl;
    // //queue theke pop korlam element
    // q.pop();
    // cout<<q.front()<<" "<<endl;
    // //printing out all the element from the queue
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }


    //taking elements from the array and pushing it into the queue and also printing out all the elements from the queue untill it become empty
    int arr[5] ={1,2,3,4,5};
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(arr[i]);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    // for(int i=0;i<q.size();i++){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    
}