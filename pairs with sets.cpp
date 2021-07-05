#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums={10,5,2,3,-6,9,11};
    unordered_set<int> check;
    int result=4;
    for(int a:nums){
        if(check.find(result-a)!=check.end()){
            cout<<"Pair is "<<a<<" "<<result-a;
        }
        check.insert(a);
    }

    return 0;
}

