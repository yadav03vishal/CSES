#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> v(n - 1);
    for (long long i = 0; i < n - 1; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] != i + 1) {
            ans = i + 1;
            break;
        }
    }

    // If the missing number is not found yet, it's n
    if (ans == 0)
        ans = n;

    cout << ans << endl;

    return 0;
}
