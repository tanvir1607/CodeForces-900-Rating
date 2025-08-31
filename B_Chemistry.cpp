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
        int size, del;
        cin >> size >> del;
        string str;
        cin >> str;

        int oddPairs = 0;
        set<char> Set(str.begin(), str.end());
        for (auto ch : Set) 
            oddPairs += count(str.begin(), str.end(), ch) & 1;
        cout << (oddPairs - del <= 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
