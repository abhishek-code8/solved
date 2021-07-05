#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> stringSearch(string big,string small){
    vector<int>occ;
    int index = big.find(small);
    while(index!=-1){
        occ.push_back(index);
        index = big.find(small,index+1);
    }
    return occ;
}


int main(){

    string str = "my name is abhishek sharma. Yes it is abhishek sharma";
    vector<int> res = stringSearch(str," is ");
    for(auto x:res){
        cout<<x<<endl;
    }

    return 0;

}