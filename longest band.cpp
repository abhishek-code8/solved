#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int longband(vector<int> arr){
    unordered_set<int> check;
    for(int x:arr){
        check.insert(x);
    }
    int largestband=0;
    for(auto element:arr){
        int parent =element -1;
        if(check.find(parent)==check.end()){
            int currentband=1;
            int next_no = element+1;
            while(check.find(next_no)!=check.end()){
                ++currentband;
                ++next_no;
            }
            largestband=max(largestband,currentband);
            
        }
    }
    return largestband;
}



int main(){
    vector<int> arr {1,9,3,0,18,5,2,4,10,7,12,6};
    int result=longband(arr);
    cout<<result;
    return 0; 
    
}