#include <iostream>
#include <algorithm>
using namespace std;

// Function to compute number of cuts required
int countCuts(int x) {
    int cuts = 0;
    while (x > 1) {
        x = (x + 1) / 2; // simulate Mouf cutting optimally
        cuts++;
    }
    return cuts;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m, a, b;
        cin >> n >> m >> a >> b;

        long long rowMaxDist = max(a, n - a + 1);
        long long colMaxDist = max(b, m - b + 1);

        int rowCuts = countCuts(rowMaxDist);
        int colCuts = countCuts(colMaxDist);

        cout << max(rowCuts, colCuts) << '\n';
    }
    return 0;
}
