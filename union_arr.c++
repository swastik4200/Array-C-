#include <bits/stdc++.h>
using namespace std;

vector<int> sortedarray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();

    // Below are two pointers i and j
    int i = 0;
    int j = 0;

    //union arr the list that will print the union of the two arays
    vector<int> unionArr;
    
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.empty()==0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.empty()==0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (unionArr.empty()==0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionArr.empty()==0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    return unionArr;
}

int main()
{ 
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    vector<int> result = sortedarray(a, b);

    cout << "Union of the two sorted arrays: ";
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
