#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n*10000; i++) {
        int i_t = i;
        int cnt2 = 0;
        while (i_t != 0) {
            if ((i_t % 10) == 6) {
                cnt2++;
            } else {
                cnt2 = 0;
            }
            if (cnt2 == 3) {
                cnt++;
                break;
            }
            i_t /= 10;
        }
        if (cnt == n) {
            cout << i;
            break;
        }
    }
    return 0;
}