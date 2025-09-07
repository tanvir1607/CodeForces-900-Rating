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
        ll a, b, size, x;
        cin >> a >> b >> size;
        while (size--) cin >> x, b += min(x, a - 1);
        cout << b << endl;
    }

    return 0;
}