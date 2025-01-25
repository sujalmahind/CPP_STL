#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"]=50;
    m["laptop"]=100;
    m["headphones"]=50;
    m["phones"]=30;
    m["camera"]=10;

   
    for(auto p:m){
        cout<< p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    m.insert({"watch",20});
    m.emplace("bulb",80);

     for(auto p:m){
        cout<< p.first<<" "<<p.second<<endl;
    }

    cout<<"count:"<<m.count("headphones")<<endl;
    cout<<"quantity:"<<m["headphones"]<<endl;

    m.erase("tv");
    if(m.find("tv")!=m.end()){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found";
    }
}