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

        int count_2 = 0, count_3 = 0;
        while (num % 2 == 0) count_2++, num /= 2;
        while (num % 3 == 0) count_3++, num /= 3;

        // if (num == 1 && count_2 <= count_3) 
        //     cout << 2 * count_3 - count_2 << endl;
        // else 
        //     cout << -1 << endl;

        if (num > 1 || count_2 > count_3) cout << -1 << endl;
        else cout << 2 * count_3 - count_2 << endl;
    }

    return 0;
}

