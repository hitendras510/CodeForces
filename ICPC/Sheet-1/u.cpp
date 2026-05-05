#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    size_t pos = s.find('.');  // fix: size_t, not int

    if (pos == string::npos) {
        cout << "int " << stoi(s);
        return 0;
    }

    string intPart = s.substr(0, pos);
    string decPart = s.substr(pos + 1);

    // Guard against malformed input like ".5" or "3."
    if (intPart.empty() || decPart.empty()) {
        cout << "invalid input";
        return 1;
    }

    int num = stoi(intPart);

    bool isZero = all_of(decPart.begin(), decPart.end(),
                         [](char c) { return c == '0'; });

    if (isZero) {
        cout << "int " << num;
    } else {
        cout << "float " << num << " " << decPart;  // decPart kept as string to preserve leading zeros
    }

    return 0;
}