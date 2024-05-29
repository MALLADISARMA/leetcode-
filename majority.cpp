#include <iostream>
#include <sstream>
#include <vector>
#include <string>

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
    if (n == 0) {
        cout << "No elements provided." << endl;
        return 0;
    }
    
    int maxCount = 0;
    int index = -1;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > n / 2) {
        cout << "Majority element is: " << a[index] << endl;
    } else {
        cout << "No Majority Element" << endl;
    }

    return 0;
}
