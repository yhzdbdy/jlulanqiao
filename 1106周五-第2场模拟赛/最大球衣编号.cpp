#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int index;
    //标记每个球员的最大编号
    vector<int> maxInd(n, 0);
    for(int i = 0; i < m; i++) {
        cin >> index;
        //实际数组下标要减一
        index--;
        //对这次进行编号排序
        for(int j = 0; j < n; j++) {
            int arg = abs(index - j);
            //判断是否要改变
            if(maxInd[j] < arg) {
                maxInd[j] = arg;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << maxInd[i] << " ";
    }
    return 0;
}