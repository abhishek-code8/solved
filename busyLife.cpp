#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sortBySec(pair<int,int> &a,pair<int,int> &b){
    return (a.second<b.second);
}
int countActivites(vector<pair<int,int> > activities){
    sort(activities.begin(),activities.end(),sortBySec);
    int res=1;
    int starTime = activities[0].second; 
    for(int i=1;i<activities.size();++i){
        if(activities[i].first >= starTime){
            starTime=activities[i].second;
            ++res;

        }
    }  
    return res;
    
    
}
int main(){

    vector<pair<int,int>> input{{7,9},{0,10},{4,5},{8,9},{4,10},{5,7}};
    int result = countActivites(input);
    cout<<result;
    return 0;
}