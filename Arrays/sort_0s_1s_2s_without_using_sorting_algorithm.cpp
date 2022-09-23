#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nUser array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int l=0,m=0,h=n-1;
    while(m<=h){
        switch(arr[m]){
            case 0:
            swap(arr[l],arr[m]);
            l++;
            m++;
            break;
            case 1:
            m++;
            break;
            case 2:
            swap(arr[m],arr[h]);
            h--;
            break;
        }
    }
    cout<<"\nSorted array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}