#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
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
    cout<<"lower bond is:"<<*(s.lower_bound(5))<<endl;;
    cout<<"upper bond is:"<<*(s.upper_bound(5))<<endl;
    cout<<"size of set:"<<s.size();

}