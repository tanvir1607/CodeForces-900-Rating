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
        string str;
        cin >> str;

        int count0 = count(str.begin(), str.end(), '0');
        int count1 = count(str.begin(), str.end(), '1');
        int pairs = min(count0, count1);
        cout << (pairs & 1 ? "DA" : "NET") << endl;
    }

    return 0;
}

