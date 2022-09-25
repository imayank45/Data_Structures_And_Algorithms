#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Given array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    sort(arr,arr+n);
    cout<<"\nEnter kth minimum element : ";
    int k;
    cin>>k;
    int kth_min_element = arr[k-1]; 
    cout<<"\nkth minimum element : "<<kth_min_element;
}