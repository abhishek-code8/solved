#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;


int leng (vector<int> arr){
    int maxlen=0;
    
    int n=arr.size();
    for(int i=1;i<n-1;++i){
        int len=1;
        if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
            int x=0,y=0;
            for(int j=i;j>0;--j){
                if(arr[j-1]<arr[j]){
                    ++x;
                }
                else
                    break;
            }
            for(int k=i;k<n-1;++k){
                if(arr[k+1]<arr[k]){
                    ++y;
                }
                else
                    break;
            }
            len=len+x+y;
        }
        maxlen=max(maxlen,len);
    }
    return maxlen;
}

int lengthMount(vector<int> arr){ // slope approach
    int len=0;
    int slope=1;
    int maxlen=0;
    for(int i=0;i<arr.size()-1;++i){

        if(arr[i+1]>arr[i]){
            if(slope==-1){
                len=1;
                slope=1;
            }
            else if(slope==1){
                ++len;
            }
        }
        else if(arr[i+1]<arr[i]){
            if(slope==1 && len !=0){
                len++;
                slope=-1;
            }
            else if(slope==-1 && len !=0){
                len++;
                slope=-1;
            }
            else if(slope==-1 && len ==0){
                slope=-1;

            }
        }
        maxlen =max(len,maxlen);
        //cout<<"at "<<i+1<<" len "<<len<<endl;
    }
    return maxlen+1;
}

int main(){
    vector<int> arr {5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int res=lengthMount(arr);
    int res2 = leng(arr);
    cout<<res<<endl<<res2;
    return 0; 
    
}