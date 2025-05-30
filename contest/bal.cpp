#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve_test_case(int n, vector<int>& d, vector<pair<int, int>>& obstacles) {
    vector<pair<int, int>> height_range(n + 1); // [low, high] at each step
    height_range[0] = {0, 0}; // starting from ground

    int lo = 0, hi = 0;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        int new_lo = lo, new_hi = hi;
        if (d[i] == 0) {
            new_lo = lo;
            new_hi = hi;
        } else if (d[i] == 1) {
            new_lo = lo + 1;
            new_hi = hi + 1;
        } else { // d[i] == -1, unknown
            new_lo = lo;
            new_hi = hi + 1;
        }

        // clip with obstacle limits
        new_lo = max(new_lo, obstacles[i].first);
        new_hi = min(new_hi, obstacles[i].second);

        if (new_lo > new_hi) {
            possible = false;
            break;
        }

        lo = new_lo;
        hi = new_hi;
        height_range[i + 1] = {lo, hi};
    }

    if (!possible) {
        cout << -1 << '\n';
        return;
    }

    // reconstruct path
    vector<int> result(n);
    int cur_height = height_range[n].first;

    for (int i = n - 1; i >= 0; --i) {
        int prev_lo = height_range[i].first;
        int prev_hi = height_range[i].second;

        if (d[i] == 0) {
            result[i] = 0;
        } else if (d[i] == 1) {
            result[i] = 1;
            cur_height -= 1;
        } else {
            // d[i] == -1, choose 1 if cur_height - 1 is still in prev range
            if (cur_height - 1 >= prev_lo) {
                result[i] = 1;
                cur_height -= 1;
            } else {
                result[i] = 0;
            }
        }

        // ensure cur_height stays valid
        if (cur_height < prev_lo || cur_height > prev_hi) {
            cout << -1 << '\n';
            return;
        }
    }

    for (int i = 0; i < n; ++i)
        cout << result[i] << " ";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> d(n);
        for (int i = 0; i < n; ++i) {
            cin >> d[i];
        }

        vector<pair<int, int>> obstacles(n);
        for (int i = 0; i < n; ++i) {
            int l, r;
            cin >> l >> r;
            obstacles[i] = {l, r};
        }

        solve_test_case(n, d, obstacles);
    }

    return 0;
}
