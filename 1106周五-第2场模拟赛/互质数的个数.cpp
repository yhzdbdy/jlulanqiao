#include<bits/stdc++.h>
using namespace std;
/*
本质就是求欧拉函数
而且 欧拉a^b = a^b-1 * 欧拉a
*/

//计算欧拉函数 欧拉a
long long oula(long long n) {
    //首先要乘以n
    long long res = n;

    //p <= n / p 代表p * p <= n防止p * p溢出，保证p有可能是n的因数
    for(int p = 2; p <= n / p; p++) {
        //n是一个因数
        if(n % p == 0) {
            res = res / p * (p - 1);

            //去除p这个因数
            while(n % p == 0) {
                n /= p;
            }
        }
    }
    
    //剩余的n如果大于1，也还是一个因数
    if(n > 1){
        res = res / n * (n - 1);
    }

    return res;
}

//计算a^b-1快速幂
long long quickPow(long long a, long long b) {
    if(a == 1 || b == 0) return 1;

    long long tmp = quickPow(a, b / 2) % 998244353;
    long long ans = (tmp * tmp) % 998244353;
    if(b % 2 == 1) ans = (ans * a) % 998244353;
    return ans; 
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long ans = ((oula(a) % 998244353) * (quickPow(a, b - 1) % 998244353)) % 998244353;
    cout << ans;
    return 0;
}