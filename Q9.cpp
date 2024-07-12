#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> arr) 
{
    int n = arr.size();
    int maxElement = INT_MIN;
    int minElement = INT_MAX;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) 
        {
            minElement = arr[i];
        }
    }

    return (maxElement - minElement);
}

int main() {
    
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6, 5};

    cout << "The maximum difference is: " << maxDiff(arr) << endl;

    return 0;
}
