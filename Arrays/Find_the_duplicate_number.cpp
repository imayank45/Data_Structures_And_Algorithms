#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nUser array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+n);
    cout<<"\nArray after sorting : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nDuplicate array element/elements : ";
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }
}