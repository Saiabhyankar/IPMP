#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(array[i]<min){
            min=array[i];
        }
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"Min: "<<min<<endl;
    cout<<"Max: "<<max<<endl;
}