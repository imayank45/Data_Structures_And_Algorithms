#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nUser array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int update1 = INT_MIN;
    int update2 = 0;
    for(int i=0;i<n;i++){
        update2 += arr[i];
        if(update1<update1){
            update1=update2;
        }
        if(update2<0){
            update2=0;
        }
    }
    cout<<"\nMaximum sum of contiguous sub-array is : "<<update2;
}