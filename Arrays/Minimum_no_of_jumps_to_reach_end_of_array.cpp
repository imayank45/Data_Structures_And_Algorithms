//Given an array of N integers arr[] where each element represents the max length of the jump that can be made forward from that element.
//Find the minimum number of jumps to reach the end of the array (starting from the first element).
//If an element is 0, then you cannot move through that element.

//Note: Return -1 if you can't reach the end of the array.

#include<bits/stdc++.h>
using namespace std;

int min_jumps(int arr[],int n){
    if(n<=1){
        return 0;
    }
    int jump = 1;
    int maxReach = arr[0];
    int steps = arr[0];
    if(arr[0]==0){
        return 0;
    }
    for(int i=0;i<n;i++){
        if(i == n-1){
            return jump;
        }
        maxReach = max(maxReach,i+arr[i]);
        steps--;
        if(steps==0){
            jump++;
            if(i>=maxReach){
                return 0;
            }
            steps = maxReach - i;
        }
    }
    return -1;
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
    
    cout<<"\nMinimum number of jumps : "<<min_jumps(arr,n);
}