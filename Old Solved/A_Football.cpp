#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        map<string, int> goals;
        
        for (int i = 0; i < n; i++) {
            string team_name;
            cin >> team_name;
            goals[team_name]++;
        }

        string winner = "";
        int max_goals = 0;
        for (auto entry : goals) {
            if (entry.second > max_goals) {
                max_goals = entry.second;
                winner = entry.first;
            }
        }

        cout << winner << endl;
    }

    return 0;
}