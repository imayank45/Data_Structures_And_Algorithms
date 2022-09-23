#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2 = {2,3,4,7,};
    vector<int> intersection;
    int m = arr1.size();
    int n = arr2.size();
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            i++;
        }else if(arr2[j]<arr1[i]){
            j++;
        }else{
            intersection.push_back(arr2[j]);
            i++;
            j++;
        }
    }
    for(auto i=intersection.begin();i!=intersection.end();i++){
        cout<<*i<<" ";
    }

}