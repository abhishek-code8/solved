#include<iostream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
    vector<int> input {0,1,0,2,1,0,1,3,2,1,2,1};
    int n=input.size();
    int trapped =0;
    
    int leftarr[input.size()];
    leftarr[0]=0;

    int rightarr[input.size()-1];
    rightarr[input.size()-1]=0;

    for(int i=1;i<input.size();++i){
        leftarr[i]=max(leftarr[i-1],input[i]);
        rightarr[n-1-i]=max(rightarr[n-i],input[n-1-i]);
    //cout<<leftarr[i];
    }
    cout<<endl;

    for(int i=0;i<input.size();++i){
        cout<<leftarr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<input.size();++i){
        cout<<rightarr[i]<<" ";
    }
    cout<<endl;
    int rain=0;
    for(int i=0;i<input.size();++i){
        cout<<min(rightarr[i],leftarr[i])<<" ";
        if(min(rightarr[i],leftarr[i])>input[i]){
            rain=rain+(min(rightarr[i],leftarr[i])-input[i]);
        }
    }
    cout<<endl<<rain;
    
    return 0;
}