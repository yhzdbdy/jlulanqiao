#include<bits/stdc++.h>
using namespace std;

bool judge(vector<int>& hash, int n) {
    while(n > 0) {
        //相应的数字加一
        hash[n % 10]++;
        n /= 10;
    }
    if(hash[0] >= 1 && hash[2] >= 2 && hash[5] >= 1) {
        return true;
    }
    return false;
}
int main() {
    long long ans = 0;
    for(int i = 2025; i <= 20250412; i++) {
        //哈希表
        vector<int> hash(10, 0);
        if(judge(hash, i)) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}