#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

int main() 
{
    optimize();

    int dx[4] = {1, 1, -1, -1}, 
        dy[4] = {1, -1, 1, -1};

    int test;
    cin >> test;
    while (test--)
    {
        ll a, b, kingX, kingY, queenX, queenY;
        cin >> a >> b >> kingX >> kingY >> queenX >> queenY;

        set<pair<ll,ll>> king_hits, queen_hits;
        for(int i = 0; i < 4; i++)
        {
            king_hits.insert({kingX + dx[i] * a, kingY + dy[i] * b});
            king_hits.insert({kingX + dx[i] * b, kingY + dy[i] * a});

            queen_hits.insert({queenX + dx[i] * a, queenY + dy[i] * b});
            queen_hits.insert({queenX + dx[i] * b, queenY + dy[i] * a});
        }
        int ans = 0;
        for (auto position : king_hits) ans += queen_hits.count(position);
        cout << ans << endl;
    }
    return 0;
}

