#include <bits/stdc++.h>
/*
#include <string>
#include <algorithm>
*/

using namespace std;

void delCharFromString(string& s, char d){
    while(s.find(d)!=string::npos)s.erase(s.begin()+s.find(d));
}

int main(){
    string s="caaaaahaaaauaaaaaaaj";
    cout<<s<<endl;
    delCharFromString(s, 'a');
    cout<<s<<endl;
}