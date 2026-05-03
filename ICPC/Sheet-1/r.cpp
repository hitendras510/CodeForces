#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;

    int year = n/365; //got number of years
    n %= 365; //remaining value of n

    int months = n/30;
    n %= 30;

    int days = n;
    

    cout << year << " years" << endl;
    cout << months << " months" << endl;
    cout << n << " days" << endl;

}