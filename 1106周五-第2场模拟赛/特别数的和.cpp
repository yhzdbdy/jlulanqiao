#include <iostream>
using namespace std;
bool isSpecial(int n) {
    //标记，出现四个数之一就变成ture
    bool sign = false;
    while(n > 0) {
        int temp = n % 10;
        if(temp == 2 || temp == 0 || temp == 1 || temp == 9) {
            sign = true;
        }
        n /= 10;
    }
    return sign;
}
int main()
{
  int n; cin >> n;
  long long ans = 0;
  for(int i = 1; i <= n; i++) {
    if(isSpecial(i)) {
        ans += i;
    }
  }
  cout << ans;
  return 0;
}