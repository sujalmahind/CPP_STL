#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(7);
    pq.push(8);
    pq.push(1);
    pq.push(3);
    pq.push(9);
    cout<<"size of pq:"<<pq.size()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(7);
    pq1.push(8);
    pq1.push(1);
    pq1.push(3);
    pq1.push(9);
    cout<<"size of pq1:"<<pq1.size()<<endl;
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
    
}