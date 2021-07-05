 #include<iostream>
 #include<bits/stdc++.h>

 using namespace std;

 pair<int,int> resultFunc(vector<int> arr){
     int smallest = INT_MAX;
     int largest = INT_MIN;
     for(int i=0;i<arr.size()-1;++i){
         if(arr[i]>arr[i+1]){
             largest=max(arr[i],largest);
             smallest=min(arr[i],smallest);
         }
     }
     cout<<"smallest and largest "<<smallest<<" "<<largest<<endl;
     int n =arr.size()-1;
     int smallidx=0;
     int largidx=0;
     for(int i=0;i<arr.size()-1;++i){
         if(smallest>arr[i] && smallest<arr[i+1]){
             smallidx=i+1;
             cout<<"smallidx "<<i+1;
         }
         if(largest<arr[n-i]&&largest > arr[n-i-1]){
             largidx=n-i-1;
             cout<<"largidx "<<i+1;
         }
     }
    return {smallidx,largidx};
 }

 int main(){
    vector<int> input {1,2,3,4,5,8,6,7,9,10,11};
    pair<int,int> result;
    result=resultFunc(input);
    cout<<result.first<<" "<<result.second;
    return 0;

 }