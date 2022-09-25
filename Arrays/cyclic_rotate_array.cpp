#include<bits/stdc++.h>
using namespace std;
void arrayRotation(int arr[],int n){
    cout<<"\nEnter how many elements to rotate : ";
    int d;
    cin>>d;
    int temp[n];
    int j=0;
    for(int i=d;i<n;i++){
        temp[j] = arr[i];
        j++;
    }
    for(int i=0;i<d;i++){
        temp[j] = arr[i];
        j++;
    }
    cout<<"\nAfter rotating the given array : ";
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {3,5,8,1,7,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    arrayRotation(arr,n);
    

}