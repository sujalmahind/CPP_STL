#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.emplace(30);
    q.emplace(40);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    queue<int >q1;
    queue<int>q2;
    q2.push(1);
    q2.push(2);
    q2.push(3);
    q2.push(4);
    q2.push(5);

    q1.swap(q2);
    cout<<"size of s1:"<<q1.size()<<endl;
    cout<<"size of s2:"<<q2.size()<<endl;
    cout<<endl;
}