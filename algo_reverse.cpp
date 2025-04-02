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

    reverse(arr,arr+n);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>v={7,2,9,8,4,3,5};
    reverse(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}