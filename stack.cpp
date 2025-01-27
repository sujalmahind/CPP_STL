#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.emplace(30);
    s.emplace(40);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    stack<int >s1;
    stack<int>s2;
    s2.push(1);
    s2.push(2);
    s2.push(3);
    s2.push(4);
    s2.push(5);

    s1.swap(s2);
    cout<<"size of s1:"<<s1.size()<<endl;
    cout<<"size of s2:"<<s2.size()<<endl;
    cout<<endl;
}