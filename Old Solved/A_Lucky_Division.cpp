#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    
    int count = sizeof(lucky_numbers) / sizeof(lucky_numbers[0]);

    bool isAlmostLucky = false;

    for (int i = 0; i < count; i++) {
        if (n % lucky_numbers[i] == 0) {
            isAlmostLucky = true;
            break;
        }
    }

    if (isAlmostLucky) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}