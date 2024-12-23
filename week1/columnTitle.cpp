#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string columnTitle) {
        int len=columnTitle.size();
        long long factor=1;
        int column=0;
        for(int i=len-1;i>=0;i--){
            column+=factor*(columnTitle[i]-'A'+1);
            factor*=26;
        }
        return column;
        
    }
int main(){
    string columnTitle;
    cin>>columnTitle;
    cout<<titleToNumber(columnTitle)<<endl;
}