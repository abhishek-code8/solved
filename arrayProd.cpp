#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
void printVec(vector<int> inp){
    cout<<endl<<"=========================";
    for(auto x:inp){
        cout<<x<<" ";
    }
    cout<<"=========================="<<endl;
}

vector<int> productArray(vector<int>arr){
    int n=arr.size();
    vector<int> pre(n,1),post(n,1),op(n,1);
    int prod=1;
    for(int i=1;i<n;++i){
        prod = prod*arr[i-1];
        pre[i]=prod;

    }
    printVec(pre);
    prod =1;
    for(int i=1;i<n;++i){
        prod=prod*arr[n-i];
        post[i]=prod;
    }
    printVec(post);

    for(int i=0;i<n;++i){
        op[i]=pre[i]*post[n-i-1];
    }
    printVec(op);
    return op;
}




int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int>result=productArray(arr);
    // for(auto x:result){
    //     cout<<x<<" ";
    // }
    return 0;

}