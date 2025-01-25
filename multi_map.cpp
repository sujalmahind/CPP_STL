#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int>mm;
    mm.emplace("tv",100);
    mm.emplace("phone",60);
    mm.emplace("tv",100);
    mm.emplace("watch",10);
    for(auto p:mm){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    mm.erase(mm.find("tv"));
     for(auto p:mm){
        cout<<p.first<<" "<<p.second<<endl;
    }

}
