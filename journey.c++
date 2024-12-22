#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycle_sum = a + b + c;
        long long full_cycles = n / cycle_sum;
        long long distance_covered = full_cycles * cycle_sum;
        long long remaining = n - distance_covered;

        int additional_days = 0;
        if (remaining > 0) {
            additional_days++;
            remaining -= a;
        }
        if (remaining > 0) {
            additional_days++;
            remaining -= b;
        }
        if (remaining > 0) {
            additional_days++;
            remaining -= c;
        }

        long long total_days = full_cycles * 3 + additional_days;
        cout << total_days << endl;
    }

    return 0;
}