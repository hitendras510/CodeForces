#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin >> s;

    int pos = s.find('.');
    if (pos == string::npos){
        //no decimal found
        cout <<"int "<<s;
    }else{
        string intPart = s.substr(0,pos); 
        string decPart =  s.substr(pos + 1);

        //check if the decimal part is empty (like : 123.)
        if(decPart.empty()){
            cout << "int " << intPart;
            return 0;
        }

        //if decimal part is all zero
        bool isZero = all_of(decPart.begin(), decPart.end(), [](char c) {
            return c == '0';
        });
        

        if(isZero){
            cout << "int " << intPart;
        }else{
            cout << "float " << intPart << " " << decPart;
        }
    }
    return 0;
}