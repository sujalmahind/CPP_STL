#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    //duplicate will not inseret
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    //cout<<"lower bond is:"<<*(s.lower_bound(4))<<endl;;   //not possible beacuse this set is not in sorted order
    //cout<<"upper bond is:"<<*(s.upper_bound(4))<<endl;
    cout<<"size of set:"<<s.size();

}