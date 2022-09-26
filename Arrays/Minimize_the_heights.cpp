//Given an array arr[] denoting heights of N towers and a positive integer K.
//For each tower, you must perform exactly one of the following operations exactly once.
//Increase the height of the tower by K
//Decrease the height of the tower by K
//Find out the minimum possible difference between the height of the shortest and
//tallest towers after you have modified each tower.

#include<bits/stdc++.h> 
using namespace std;

void minMaxHeights(int arr[],int n,int d){
    for(int i=0;i<n;i++){
        if((arr[i]-d) <= 0){
            arr[i] = (arr[i] + d);
        }else if((arr[i]-d) > 0){
            arr[i] = (arr[i] - d);
        }
    }
    cout<<"\nModified array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int difference = (arr[n-1]) - arr[0];
    cout<<"\nThe difference between the largest and the smallest element is : "<<difference;
}


int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nProvided user array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the value of increase/decrease height of tower : ";
    int d;
    cin>>d;
    minMaxHeights(arr,n,d);
}