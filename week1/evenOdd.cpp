#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    int even=0;
        int odd=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]%2==1)odd++;
       }
       int i=even,j=nums.size()-odd;
       while(i<j && j<nums.size()){
           if(nums[i]%2==0)i++;
           else{
               int temp=nums[j];
               nums[j]=nums[i];
               nums[i]=temp;
               j++;
           }
       }
    //    sort(nums.begin(),nums.end()-odd);
    //    sort(nums.end()-odd,nums.end());

       for(int i=0;i<nums.size();i++){
           cout<<nums[i]<<" ";
       }
}