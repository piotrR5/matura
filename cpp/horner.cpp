#include<bits/stdc++.h>
/*
    #include<iostream>
    #include<vector>
*/

using namespace std;

int horner(vector<int> polynomial, int x){
    int ret=0;
    for(int i=0; i<polynomial.size(); i++){
        ret*=x;
        ret+=polynomial[i];
    }
    return ret;
}

int main(){
    vector<int> polynomial = {3,5,15};
    int x=25;
    cout<<horner(polynomial,x);
}
