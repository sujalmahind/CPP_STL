#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>um;
    um.emplace("tv",100);
    um.emplace("phone",60);
    um.emplace("laptop",100);
    um.emplace("watch",10);
    um.emplace("tv",100);

    for(auto p:um){
        cout<<p.first<<" "<<p.second<<endl;
    }
}