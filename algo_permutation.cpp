#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s="sujal";
    next_permutation(s.begin(),s.end());
    cout<< s <<endl;
    string s1="sujla";
    prev_permutation(s1.begin(),s1.end());
    cout<< s1 <<endl;

}