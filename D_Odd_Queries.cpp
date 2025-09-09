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
        int size, query;
        cin >> size >> query;
        vector<ll> vec(size + 1), prefixSum(size + 1);
        for (int i = 1; i < size + 1; i++) 
            cin >> vec[i],
            prefixSum[i] = prefixSum[i - 1] + vec[i];

        while (query--)
        {
            ll l, r, k, ans;
            cin >> l >> r >> k;
            ans = (prefixSum[l - 1]) 
                    + ((r - l + 1) * k) 
                    + (prefixSum.back() - prefixSum[r]);
            cout << ((ans & 1) ? "YES" : "NO") << endl;
        }
    }

    return 0;
}