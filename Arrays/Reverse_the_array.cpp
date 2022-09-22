#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,a;
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<"Before reversing array : ";
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\nAfter reversing array : ";
    for(auto i=v.rbegin();i!=v.rend();i++){
        cout<<*i<<" ";
    }
}