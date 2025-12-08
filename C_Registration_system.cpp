#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> database;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;
        
        if (database[name] == 0) {
            cout << "OK" << "\n";
            database[name] = 1;
        } 
        else {
            cout << name << database[name] << "\n";
            database[name]++;
        }
    }

    return 0;
}