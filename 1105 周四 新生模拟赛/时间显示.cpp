#include<bits/stdc++.h>
using namespace std;
//86400000
int main() {
    long long n; cin >> n;
    //转化为一天
    n = n % 86400000;
    int hour = n / 3600000;
    int min = n / 60000 % 60;
    int sec = n / 1000 % 60; 
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << min << ":" << setw(2) << sec;
    return 0;
}