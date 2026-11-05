#include<bits/stdc++.h>
using namespace std;
int stock[10] = {13, 1, 2, 3, 5, 4, 4, 2, 2, 2};
int ans = 0;
int caculate(int n) {
    int ans = 0;
    while(n > 0) {
        ans += stock[n % 10];
        n /= 10;
    }
    return ans;
}
int main() {
    //从年开始
    for(int year = 2000; year <= 2024; year++) {
        //得到这一年的月日
        int days[13] = {
            0, 31, 28, 31, 30, 31, 30,
            31, 31, 30, 31, 30, 31
        };
        //如果是闰年需要改变周二的日数
        if (year % 400 == 0 ||
            (year % 4 == 0 && year % 100 != 0)) {
            days[2] = 29;
        }

        int n = 0;
        
        //按照月份日期累加
        for(int month = 1; month <= 12; month++) {
            for(int day = 1; day <= days[month]; day++) {
                //转换日期为********
                n = year * 10000 + month * 100 + day;
                //超过的日期不要进行操作
                if(n > 20240413) continue;

                if(caculate(n) > 50) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}