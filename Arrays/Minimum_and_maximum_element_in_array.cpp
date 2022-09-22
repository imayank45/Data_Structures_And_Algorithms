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
    cout<<"Array : ";
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<"\nMaximum element : "<<*max_element(v.begin(),v.end());
    cout<<"\nMinimum element : "<<*min_element(v.begin(),v.end());
}