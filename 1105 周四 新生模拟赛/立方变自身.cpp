#include<bits/stdc++.h>
using namespace std;

bool caculate(int n) {
    long long tmp = pow(n, 3);
    int add = 0;
    while(tmp > 0) {
        add += tmp % 10;
        tmp /= 10;
    }
    return n == add;
}
int main() {
    long long ans = 0;
    for(int i = 1; i <= 100000; i++) {
        if(caculate(i)) ans++;
    }
    cout << ans;
    return 0;
}