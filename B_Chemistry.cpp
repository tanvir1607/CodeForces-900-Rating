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

        int oddCount = 0;
        set<char> Set(str.begin(), str.end());
        for (auto ch : Set) 
            oddCount += count(str.begin(), str.end(), ch) & 1;
        cout << (oddCount - del <= 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
