#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<vector<int>>& src, int k) {
    int count = src.size();
    int maxlen = 2;
    while(true) {
        int n = 0;
        for(int i = 0; i < count; i++) {
            int h = src[i][0];
            int w = src[i][1];
            //这一块最多切出多少块
            //写错了，这里应该是相乘
            // n += h / maxlen; n += w / maxlen;
            n += (h / maxlen) * (w / maxlen);
        }
        if(n < k) break;
        //否则还可以继续分得更大
        maxlen++;
    }
    return maxlen - 1;
}

int main() {
    int n, k;
    cin >> n >> k;
    //这样写已经有了n个{0, 0}
    // vector<vector<int>> src(n, vector<int>(2));
    vector<vector<int>> src;
    int h, w;
    for(int i = 0; i < n ; i++) {
        cin >> h >> w;
        //后续push_back又重新添加
        src.push_back({h, w});
    }
    cout << maxLen(src, k);
    return 0;
}