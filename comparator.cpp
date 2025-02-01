#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second)return true;
    if(p1.second > p2.second)return false;
}
int main(){
    vector<pair<int,int>>v={{2,1},{9,2},{1,4},{5,8}};
    sort(v.begin(),v.end(),comparator);
    for(auto p:v){
        cout<<p.first<<" "<< p.second <<endl;

    }
}