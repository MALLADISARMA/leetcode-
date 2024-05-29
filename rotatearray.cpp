#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    vector<int> a;
    
    auto parse = [](const string& input, vector<int>& array) {
        istringstream is(input);
        int num;
        while (is >> num) {
            array.push_back(num);
        }
    };

    parse(input, a);

    int n = a.size();
    

    int k;
    cout << "Enter number of rotations: ";
    cin >> k;

    k = k % n;
    
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
