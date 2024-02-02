#include <bits/stdc++.h>

using namespace std;

bool isSubarray(const vector<int>& array, const vector<int>& subarray) {
    int n = array.size();
    int m = subarray.size();

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (array[i + j] != subarray[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            return true;
        }
    }

    return false;
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> subarray = {3, 4, 5};

    if (isSubarray(array, subarray)) {
        cout << "Subarray found in the array." << endl;
    } else {
        cout << "Subarray not found in the array." << endl;
    }

    return 0;
}