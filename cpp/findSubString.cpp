#include <bits/stdc++.h>
/*
#include <string>
#include <iostream>
*/

using namespace std;

int findSubString(string s, string sub){
    if(s.find(sub)!=string::npos)return s.find(sub);
    else return -1;
}

int main(){
    string s="sgjdklgjlkgjasjagjsdg;sdgfoxerlgdksdkgl;dgldg";
    string sub="foxer";
    cout<<findSubString(s,sub)<<endl;
}