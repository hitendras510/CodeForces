#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    string s;
    int b;

    cin >> a >> s >> b;

    if(s == ">"){
        if(a > b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if(s == "="){
        if(a == b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }else if(s == "<"){
        if (a < b){
            cout << "Right";
        }else{
            cout << "Wrong";
        }
    }

}