#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> a(n);  // Initialize vector with size n
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];  // Correctly read elements into the vector
    }

    int target;
    cout << "Enter target element: ";
    cin >> target;

    sort(a.begin(), a.end());

    // Search for the target element
    auto it = find(a.begin(), a.end(), target);
    if (it != a.end()) {
        int index = distance(a.begin(), it);
        cout << "Element found at index: " << index << endl;
        return 0;
    } else {
        // If target is not found, insert it and find its new position
        a.push_back(target);
        sort(a.begin(), a.end());
        auto it_new = find(a.begin(), a.end(), target);
        int index_new = distance(a.begin(), it_new);
        cout << "Element not found initially. Inserted and now at index: " << index_new << endl;
        return 0;
    }
}
