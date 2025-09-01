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
        ll a, b, size;
        cin >> a >> b >> size;
        vector<ll> vec(size);
        for (ll &x : vec) cin >> x;

        ll sum = b;
        for (ll x : vec) sum += min(x, a - 1);
        cout << sum << endl;
    }

    return 0;
}