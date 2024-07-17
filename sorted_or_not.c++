#include <bits/stdc++.h>
using namespace std;

bool sorted_or_not(vector<int> &arr, int n) {
    for (int i = 1; i < n; i++) { 
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (sorted_or_not(arr, n)) {
        cout << "The array is sorted" << endl;
    } else {
        cout << "Not sorted" << endl;
    }

    return 0;
}
