#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    vec.pop_back();

    vector<int>v1={10,20,30,40,50,60,70};
    vector<int>v2(v1);
    for(int val:v2){
        cout<< val<<" ";
    }
    cout<<endl;
    v2.erase(v2.begin());
    for(int val:v2){
        cout<< val<<" ";
    }
    cout<<endl;
    v2.erase(v2.begin()+2);
    for(int val:v2){
        cout<< val<<" ";
    }
    cout<<endl;
    v2.erase(v2.begin()+1,v2.begin()+3);
    for(int val:v2){
        cout<< val<<" ";
    }




    cout<<endl;
    cout<< vec.size() <<endl;
    cout<< vec.capacity()<<endl;

    for (int val:vec){
        cout<< val<<" ";
    }
    cout<<endl;
    vec.insert(vec.begin()+2,100);
    for (int val:vec){
        cout<< val<<" ";
    }
    cout<<endl;
    cout<<"value at index 2:"<<vec[2]<<endl;
    cout<<"element at front :"<<vec.front()<<endl;
    cout<<"element at back:"<<vec.back()<<endl;
    cout<<"vec.begin: "<<*(vec.begin())<<endl;
    cout<<"vec.end: "<<*(vec.end())<<endl;
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
}    