#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int maxSubarraySum(vector<int> arr){
    int n = arr.size();
    int maxSum=0;
    int sum=0;
    for(int i=0;i<n;++i){
        sum= sum+arr[i];
        if(sum<0){
            sum=0;
        }
        maxSum=max(sum,maxSum);
    }
    return maxSum;
    
    
    
    
    
}

int main(){
    vector<int> inp {-1,2,3,4,-2,6,-8,3};
    cout<<maxSubarraySum(inp);
    return 0;

}