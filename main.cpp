#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int TC;
    cin >> TC;
    while (TC--) {
        int n;
        cin >> n;
        int k;
        cin >> k;

        int a[n];
        int res = INT16_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n, greater());
        for (int i = 0; i < k; i++) {

           cout << a[i] << " ";
        }
        cout <<  endl;
    }
    return 0;
}
