#include<bits/stdc++.h>

using namespace std;

int main(){
     map<int,int> mpp;
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        }
    for(int i=0;i<n;i++){
        if(mpp[arr[i]]%2==1)
        cout<<arr[i];
        break;
    }
}