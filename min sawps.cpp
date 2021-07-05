#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int checkSwaps(vector<int>inp){
    int n=inp.size();
    pair<int,int> jumbled[n];
    for(int i=0;i<n;++i){
        jumbled[i].first=inp[i];
        jumbled[i].second=i;
    }
    sort(jumbled,jumbled+n);
    int ans=0;
    vector<bool> check(n,false);
    for(int i=0;i<n;++i){
        if(jumbled[i].second==i || check[i]==true){
            continue;
        }
        
        int res=0;
        int present=i;
        int nextnode=jumbled[i].second;
        while(!check[present]){
            ++res;
            nextnode=jumbled[present].second;
            check[present]=true;
            present=nextnode;
        }
        ans =ans+(res-1);        
    }
    return ans;
}


int main(){
    vector<int> input {10,11,5,4,3,2,1};
    int result = checkSwaps(input);
    cout<<result;
    return 0;
}