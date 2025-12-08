#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool caps = true;
    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) {
            caps = false;
            break;
        }
    }

    if (caps) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) {
                s[i] = toupper(s[i]);
            } else {
                s[i] = tolower(s[i]);
            }
        }
    }
    cout << s << endl;

    return 0;
}