#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(30);
    d.push_back(20);
    d.push_back(10);
    d.push_back(00);
    d.push_front(50);
    d.push_front(60);
    d.push_front(70);
    d.push_front(80);
    
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    d.pop_back();
    d.pop_front();
    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"size of list is:"<<d.size()<<endl;
    cout<<"element at front :"<<d.front()<<endl;
    cout<<"element at back:"<<d.back()<<endl;
    cout<<"list begin: "<<*(d.begin())<<endl;
    cout<<"list end: "<<*(d.end())<<endl;
    cout<<"element at index 2 is:"<<d[2]<<endl;


     for(auto i=d.rbegin();i!=d.rend();i++){
        cout<<*(i)<<" ";
     }
}