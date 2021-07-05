#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

pair<int,int> minDifference(vector<int> a,vector<int> b){
    int leastdiff=INT_MAX;
    pair<int,int>res;
    for(int i=0;i<a.size();++i){
        for(int j=0;j<b.size();++j){
            int diff = a[i]-b[j];
            diff = diff<0?diff * (-1):diff;
            cout<<diff<<" "<<a[i]<<" "<<b[j]<<endl;
            if(diff<leastdiff){
            res.first=a[i];
            res.second=b[j];
            leastdiff=diff;
            }

        }
    }
    return res;
    
    
}


int main(){
    vector<int> inp {23,5,10,17,30};
    vector<int> inp2 {26,134,135,14,19};
    pair<int,int> printres = minDifference(inp,inp2);
    cout<<printres.first<<" "<<printres.second;
    return 0;

}