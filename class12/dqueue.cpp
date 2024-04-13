#include<bits/stdc++.h>
using namespace std;
int main(){
    //dequeue means double queue
    //that means we can insert and delete elements from the both ends 
    //queue tae amra shudu front theke element delete and add korte pari
    //kintu dequeue tae amra front and back both side theke delete and add korte pari
    //sliding window problem korte hobe

    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.push_back(5);
    
    // output => 3 2 1 4 5
    // while(!dq.empty()){
    //     cout<<dq.front()<<" ";
    //     dq.pop_front();
    // }

    cout<<dq.front()<<" "<<dq.back()<<" "<<endl;

    //deleting elements from the dqueue
    dq.pop_front();
    dq.pop_back();

    cout<<dq.front()<<" "<<dq.back()<<" "<<endl;


    cout<<dq.size()<<" "<<endl;
    cout<<dq.empty()<<" "<<endl;



}