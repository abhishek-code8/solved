#include<iostream>
#include<string>

using namespace std;


int main(){
    string str="hello world, how are you?";
    
    int spaces=0;
    for(int i=0;i<str.size();++i){
        if(str[i]==' '){
            ++spaces;
        }
    }
    cout<<spaces<<endl;
    int extend = spaces*2;
    string final[extend+str.size()];
    int j=str.size()-1+extend;
    for(int i=str.size()-1;i>=0;--i){
        
        if(str[i]==' '){
            final[j]='0'; 
            final[--j]='2';
            final[--j]='%';
            
        }
        else{
            final[j]=str[i];
        }
        --j;
    }
    for(auto x: final){
        cout<<x;
    }

    return 0;
}