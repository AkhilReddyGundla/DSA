#include <iostream>
#include <vector>
using namespace std;

int getEquilibriumIndex(vector<int> &arr, int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
        totalSum += arr[i];

    int leftSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        leftSum += arr[i];
        if (totalSum - arr[i + 1] == 2 * leftSum)
        {
            return i + 1;
        }
    }
    return -1;
}

int missingNum(vector<int> &arr)
{
    // code here
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int currSum = 1;
    for (int i = 0; i < n; i++)
    {
        if (currSum != arr[i])
            break;
        currSum += 1;
    }
    return currSum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << getEquilibriumIndex(arr, n);
}