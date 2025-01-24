#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,int>p={1,2};
    cout<< p.first<<" ";
    cout<<p.second<<" ";
    cout<<endl;
    pair<char,int>p1={'s',61};
    cout<< p1.first<<" ";
    cout<< p1.second<<" ";
    cout<<endl;
    pair<int,pair<char,int>>p2={10,{'s',20}};
    cout<< p2.first<<" ";
    cout<< p2.second.first<<" ";
    cout<< p2.second.second<<" ";
    cout<<endl;
    vector<pair<int,int>>v={{10,20},{30,40},{50,60}};
    v.push_back({70,80});
    v.emplace_back(90,100);
    for(auto p:v){
        cout<<p.first<<" "<<p.second<<" ";
    }







}