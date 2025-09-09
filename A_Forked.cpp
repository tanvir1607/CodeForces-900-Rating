#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int dx[4] = {1, 1, -1, -1},
    dy[4] = {1, -1, 1, -1};

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int a, b, kingX, kingY, queenX, queenY;
        cin >> a >> b >> kingX >> kingY >> queenX >> queenY;

        set<pair<int, int>> kingPos, queenPos;
        for (int i = 0; i < 4; i++)
        {
            kingPos.insert({kingX + a * dx[i], kingY + b * dy[i]});
            kingPos.insert({kingX + b * dx[i], kingY + a * dy[i]});

            queenPos.insert({queenX + a * dx[i], queenY + b * dy[i]});
            queenPos.insert({queenX + b * dx[i], queenY + a * dy[i]});
        }
        int ans = 0;
        for (auto pos : kingPos) ans += queenPos.count(pos);
        cout << ans << endl;
    }

    return 0;
}