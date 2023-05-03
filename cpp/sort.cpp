#include <bits/stdc++.h>
/*
#include <iostream>
#include <vector>

zadziala kazdy kontener indexowany
*/

using namespace std;

void sort(vector<int>& vec){
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i] > vec[j]){
                int foo=vec[j];
                vec[j]=vec[i];
                vec[i]=foo;
            }
        }
    }    
}

int main(){
    vector<int>a={1,5,3,2,6,7,4};
    for(auto i:a)cout<<i<<" ";
    cout<<endl;
    sort(a);
    for(auto i:a)cout<<i<<" ";
    cout<<endl;
}