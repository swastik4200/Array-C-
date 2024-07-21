#include <bits/stdc++.h>
using namespace std;

vector<int> findarrayIntersection(vector<int> &A, vector<int> &B, int n, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            i++;
        }
        else if (B[j] < A[i])
        {
            j++;
        }
        else
        {
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    int n, m;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;
    vector<int> A(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> m;
    vector<int> B(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    vector<int> result = findarrayIntersection(A, B, n, m);

    cout << "Intersection of the two arrays: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
