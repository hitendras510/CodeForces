#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    char s, eq;

    cin >> a >> s >> b >> eq >> c;

    int result;

    if (s == '+') {
        result = a + b;
    } else if (s == '-') {
        result = a - b;
    } else {
        result = a * b;
    }

    if (result == c) {
        cout << "Yes";
    } else {
        cout << result;
    }

    return 0;
}