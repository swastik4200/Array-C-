#include <bits/stdc++.h>
using namespace std;
int secondlarge(vector<int> &arr, int n)
{
    int largest_ele = arr[0];
    int secondlargest_ele = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest_ele)
        {
            secondlargest_ele = largest_ele;
            largest_ele = arr[i];
        }
        else if(arr[i]<largest_ele && arr[i]>secondlargest_ele){
            secondlargest_ele = arr[i];
        }
    }
    return secondlargest_ele;
}
int main(){
    int n;
    cout << "enter the number of terms";
    cin >> n;
    vector <int> arr(n);
    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The second largest element is " << secondlarge(arr , n) << endl;
    return 0;
    
    }