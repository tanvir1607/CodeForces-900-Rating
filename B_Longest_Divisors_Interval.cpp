// Approach - 01
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
        ll num;
        cin >> num;

        int ans = 0;
        for (int i = 1; num % i == 0; i++) ans++;
        cout << ans << endl;
    }

    return 0;
}





// Approach - 02
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
        ll num;
        cin >> num;

        int i = 1;
        while (!(num % i)) i++;
        cout << --i << endl;
    }

    return 0;
}