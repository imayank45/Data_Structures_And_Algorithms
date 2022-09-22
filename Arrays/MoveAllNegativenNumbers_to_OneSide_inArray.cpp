#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,n;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<"Original Array : ";
    for(int i : v){
        cout<<i<<" ";
    }
    sort(v.begin(),v.end());
    cout<<"\nAfter moving negative numbers to one side : ";
    for(int i : v){
        cout<<i<<" ";
    }
}