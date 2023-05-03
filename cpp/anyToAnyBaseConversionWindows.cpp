#include <bits/stdc++.h>
/*
#include <iostream>
#include <string>
#include <cstdlib>
*/

using namespace std;

string anyToAny(string num, int numBase, int desBase){
    char t[100];
    return itoa(stoi(num, 0, numBase), t, desBase);
}

int main(){
    cout<<anyToAny("12211", 3, 16);
}
