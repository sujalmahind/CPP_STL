#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(auto i:arr){
        cout<<i<<" ";
    }

    cout<<endl;
    sort(arr,arr+n,greater<int>());
     for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>v={7,2,9,8,4,3,5};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;
    sort(v.begin(),v.end(),greater<int>());
    for(auto i:v){
        cout<<i<<" ";
    }
}