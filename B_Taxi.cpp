#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == 1) count1++;
        else if (s == 2) count2++;
        else if (s == 3) count3++;
        else count4++;
    }

    int taxis = count4;

    taxis += count3;
    count1 = count1 - count3; 

    if (count1 < 0) count1 = 0;

    taxis += count2 / 2;
    
    if (count2 % 2 != 0) {
        taxis++;

        count1 = count1 - 2;
        if (count1 < 0) count1 = 0;
    }

    if (count1 > 0) {
        taxis += (count1 + 3) / 4;
    }

    cout << taxis << endl;

    return 0;
}