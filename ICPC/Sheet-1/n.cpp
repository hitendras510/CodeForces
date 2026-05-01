#include<bits/stdc++.h>
using namespace std;



int main(){
    char n;
    cin >> n;

 if(n >= 'a' && n <= 'z'){
    cout << char(n - 32);
 }else{
    cout << char(n + 32);
 }    
}