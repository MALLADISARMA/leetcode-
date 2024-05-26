#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a, b;
    int s1, s2;
    double result;

    cout << "Size of array 1: " << endl;
    cin >> s1;

    a.resize(s1); // Resize vector 'a' to hold 's1' elements
    cout << "Enter elements of array 1: " << endl;
    for (int i = 0; i < s1; ++i) {
        cin >> a[i];
    }

    cout << "Size of array 2: " << endl;
    cin >> s2;

    b.resize(s2); // Resize vector 'b' to hold 's2' elements
    cout << "Enter elements of array 2: " << endl;
    for (int i = 0; i < s2; ++i) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> merged(a.size() + b.size());
    merge(a.begin(), a.end(), b.begin(), b.end(), merged.begin());

    cout << "Merged array is: " << endl;
    for (int i = 0; i < merged.size(); ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;

    int n = merged.size();
    if (n % 2 == 0) {
        result = (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    } else {
        result = merged[n / 2];
    }

    cout << "Median is: " << result << endl;

    return 0;
}
