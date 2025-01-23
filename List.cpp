#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main(){
    list<int>l;
    l.push_back(30);
    l.push_back(20);
    l.push_back(10);
    l.push_back(00);
    l.push_front(50);
    l.push_front(60);
    l.push_front(70);
    l.push_front(80);
    
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    l.pop_back();
    l.pop_front();
    for(int val:l){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"size of list is:"<<l.size()<<endl;
    cout<<"element at front :"<<l.front()<<endl;
    cout<<"element at back:"<<l.back()<<endl;
    cout<<"list begin: "<<*(l.begin())<<endl;
    cout<<"list end: "<<*(l.end())<<endl;


     for(auto i=l.rbegin();i!=l.rend();i++){
        cout<<*(i)<<" ";
     }
}