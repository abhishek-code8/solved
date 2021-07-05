#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums={10,5,2,3,-6,9,11};
    pair<int,int>result={};
    int flag=0;
    int target=4;
    for(int i=0;i<nums.size();++i){
        if(flag==1){
            break;
        }
        for(int j=0;j<nums.size();++j){
            if(i!=j){
                cout<<j<<" ";
                if(nums[i]+nums[j]==target){  
                    cout<<"here";              
                    result.first=i;result.second=j;
                    flag=1;
                    break;
                }
            }
        }
        cout<<endl;
    }
    cout<<"Numbers are : "<<nums[result.first]<<" "<<nums[result.second];
    return 0;
}

