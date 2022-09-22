#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,j=0;
    vector<int> arr1 = {1,2,3,3,7};
    vector<int> arr2 = {3,4,4,5,6,8};
    vector<int> unionA;
    int m = arr1.size();
    int n = arr2.size();
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            if(unionA.empty()){
                unionA.push_back(arr1[i]);
            }else if(unionA.back()!=arr1[i]){
                unionA.push_back(arr1[i]);
            }
            i++;
            j++;
        }else if(arr1[i]<arr2[j]){
            if(unionA.empty()){
                unionA.push_back(arr1[i]);
            }else if(unionA.back()!=arr1[i]){
                unionA.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionA.empty()){
                unionA.push_back(arr2[j]);
            }else if(unionA.back()!=arr2[j]){
                unionA.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<m){
        if(unionA.empty()){
            unionA.push_back(arr1[i]);
        }else if(unionA.back()!=arr1[i]){
            unionA.push_back(arr1[i]);
        }
        i++;
    }
    while(j<n){
        if(unionA.empty()){
            unionA.push_back(arr2[j]);
        }else if(unionA.back()!=arr2[j]){
            unionA.push_back(arr2[j]);
        }
        j++;
    }
    for(auto i=unionA.begin();i!=unionA.end();i++){
        cout<<*i<<" ";
    }
}