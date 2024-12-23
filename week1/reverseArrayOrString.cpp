#include<bits/stdc++.h>
using namespace std;


void reverseArray(vector<int> &array){
    int start=0;
    int end=array.size()-1;
    while(start<end){
        swap(array[start],array[end]);
        start++;
        end--;
    }
}
void reverseString(string &str){
    int start=0;
    int end=str.size()-1;
    while(start<end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}
int main(){
    vector<int> array;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        array.push_back(val);
    }
    for(auto it:array){
        cout<<it<<" ";
    }
    cout<<endl;
    reverseArray(array);
    for(auto it:array){
        cout<<it<<" ";
    }

    string str;
    cin>>str;
    cout<<str<<endl;
    reverseString(str);
    cout<<str<<endl;
}