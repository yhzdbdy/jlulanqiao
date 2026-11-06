#include <bits/stdc++.h>
using namespace std;

// direction 表示这一遍把 ? 替换成什么
int simulate(const string& s, char direction) {
    int pos = 0;
    int minPos = 0, maxPos = 0;

    for (char c : s) {
        if (c == '?') c = direction;

        if (c == 'L') pos--;
        else if (c == 'R') pos++;
        // S 停在原地，pos 不变

        minPos = min(minPos, pos);
        maxPos = max(maxPos, pos);
    }

    return maxPos - minPos + 1;
}

int main() {
    string s;
    cin >> s;

    int ansL = simulate(s, 'L'); // 第一遍：? 全部当作 L
    int ansR = simulate(s, 'R'); // 第二遍：? 全部当作 R

    cout << max(ansL, ansR) << '\n';
    return 0;
}
