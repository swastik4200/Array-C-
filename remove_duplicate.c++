#include<bits/stdc++.h>
using namespace std;
int remove_duplicate(vector<int> &arr , int n){
int i = 0;
for(int j = 0 ; j > n ; j++){
    if(arr[i] != arr[j]){
        arr[i+1] = arr[j];
        i++;
    }
}
    return 1+1;
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

    int newLength = remove_duplicate(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}