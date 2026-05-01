#include<bits/stdc++.h>
using namespace std;



int main(){
    int a;
    char s;
    int b;
    cin >> a >> s >> b;

    if(s == '+'){
        cout<<a+b;
    }else if(s == '-'){
        cout<<a-b;
    }else if(s == '*'){
        cout<<a*b;
    }else if(s == '/'){
        cout <<a/b;
    }
}