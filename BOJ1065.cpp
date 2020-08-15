#include <iostream>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 0;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i <= 10) {
            cnt++;
        } else {
            int i_t = i;
            int delta = ((i_t / 10) % 10) - (i_t % 10);
            bool failed = false;
            while ((i_t/10) != 0) {
                int a = i_t % 10;
                int b = (i_t / 10) % 10;
                if (delta + a != b) {
                    failed = true;
                    break;
                }
                i_t /= 10;
            }
            if (!failed)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}