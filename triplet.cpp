#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>

using namespace std;


vector<vector<int>> triplets(vector<int>arr,int targetSum){
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector<vector<int>>result;
    // two pointer approach to solve pair problem
    for(int i=0;i<n-3;++i){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int resultSum=arr[i]+arr[j]+arr[k];
            if(resultSum==targetSum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                --k;
            }
            else if(resultSum<targetSum){
                ++j;
            }
            else if(resultSum>targetSum){
                --k;
            }
        }
    }
    return result;

}



int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,15};
    int s =18;

    vector<vector<int>> result = triplets(arr,s);
    for(int i=0;i<result.size();++i){
        for(int j=0;j<result[i].size();++j){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

