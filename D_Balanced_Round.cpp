#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int size, k, largestLen = 1, count = 1;
        cin >> size >> k;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        sort(vec.begin(), vec.end());
        for (int i = 1; i < size; i++)
        {
            count = vec[i] - vec[i - 1] <= k ? count + 1 : 1;
            largestLen = max(count, largestLen);
        }
        cout << size - largestLen << endl;
    }

    return 0;
}