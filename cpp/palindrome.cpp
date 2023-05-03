#include <bits/stdc++.h>
/*
    #include <string>
    #include <algorithm>
*/

using namespace std;

bool isPalindrome(string s){
    return s==string(s.rbegin(), s.rend());
}

int main(){
    cout<<isPalindrome("mapanapam");
}
