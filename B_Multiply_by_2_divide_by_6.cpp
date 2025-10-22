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
        int num;
        cin >> num;

        int count2 = 0, count3 = 0;
        while (num > 0 && num % 2 == 0) count2++, num /= 2;
        while (num > 0 && num % 3 == 0) count3++, num /= 3;
        if (num > 1 || count2 > count3) cout << -1 << endl;
        else cout << (count3 - count2) + count3 << endl;
        // if (num == 1 && count2 <= count3) 
        //     cout << (count3 - count2) + count3 << endl;
        // else 
        //     cout << -1 << endl;
    }

    return 0;
}

