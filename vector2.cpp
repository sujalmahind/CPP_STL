#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
     vector<int>vec(n);
     for(int i=0;i<n;i++){
        cin>>vec[i];
     }
     vector<int>::reverse_iterator i;
     for(i=vec.rbegin();i!=vec.rend();i++){
        cout<<*(i)<<" ";
     }
}