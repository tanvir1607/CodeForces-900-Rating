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
        int size, k;
        string str;
        cin >> size >> k >> str;

        int oddCount = 0;
        set<char> letters(str.begin(), str.end());
        for (char letter : letters) 
            oddCount += count(str.begin(), str.end(), letter) & 1;
        cout << (oddCount - k <= 1 ? "YES" : "NO") << endl;
    }

    return 0;
}
