#include<vector>
#include<iostream>
#include<string>
using namespace std;

//Complete this method, don't write main
vector<string> fizzbuzz(int n){
    vector<string> returnvector;
    for(int i=0;i<n;++i){
        
        if((i+1)%3==0){
            if((i+1)%5==0){
                returnvector.push_back("FizzBuzz");
            }
            else
            returnvector.push_back("Fizz");
        }        
        else if((i+1)%5==0)
        {
            returnvector.push_back("Buzz");
        }
        else{
            returnvector.push_back(to_string(i+1));
        }
    }
     return returnvector;   
    
}

int main(){
    int n=15;
    vector<string> printvector = fizzbuzz(n);
    for(string s:printvector){
        cout<<s<<" ";
    }
}