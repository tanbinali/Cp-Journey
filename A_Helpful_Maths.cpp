#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    vector<char> nums;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] != '+') {
            nums.push_back(s[i]);
        }
    }
    
    sort(nums.begin(), nums.end());
    
    cout << nums[0];
    
    for(int i = 1; i < nums.size(); i++) {
        cout << "+" << nums[i];
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}