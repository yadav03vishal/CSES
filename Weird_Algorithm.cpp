#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> ans;
    long long n;
    cin >> n;

    while (n != 1) {
        ans.push_back(n);
        if (n % 2 == 0) 
            n = n / 2;
        else 
            n = n * 3 + 1;
    }
    // Add 1 to the end of the sequence as the final element
    ans.push_back(1);

    // Print the sequence stored in the ans vector
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}
