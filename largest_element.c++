#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The largest element is " << largest_element(arr, n) << endl;
    return 0;
}
