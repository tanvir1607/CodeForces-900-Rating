// Approach - 01 --> Implemented using Set
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

vector<int> dx = {1, 1, -1, -1};
vector<int> dy = {1, -1, 1, -1};

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll a, b, kingX, kingY, queenX, queenY;
        cin >> a >> b >> kingX >> kingY >> queenX >> queenY;

        set<pair<ll, ll>> kingPos, queenPos;
        for (int i = 0; i < 5; i++)
        {
            kingPos.insert({kingX + a * dx[i], kingY + b * dy[i]});
            kingPos.insert({kingX + b * dx[i], kingY + a * dy[i]});

            queenPos.insert({queenX + a * dx[i], queenY + b * dy[i]});
            queenPos.insert({queenX + b * dx[i], queenY + a * dy[i]});
        }
        ll ans = 0;
        for (auto position : kingPos) ans += queenPos.count(position);
        cout << ans << endl;
    }

    return 0;
}





// Approach - 02 --> Implemented using Map
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define endl '\n'
#define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

vector<int> dx = {1, 1, -1, -1};
vector<int> dy = {1, -1, 1, -1};

int main() 
{
    optimize();

    int test;
    cin >> test;
    while (test--)
    {
        ll a, b, kingX, kingY, queenX, queenY;
        cin >> a >> b >> kingX >> kingY >> queenX >> queenY;

        map<pair<ll, ll>, bool> kingPos, queenPos;
        for (int i = 0; i < 5; i++)
        {
            kingPos[{kingX + a * dx[i], kingY + b * dy[i]}] = true;
            kingPos[{kingX + b * dx[i], kingY + a * dy[i]}] = true;
            queenPos[{queenX + a * dx[i], queenY + b * dy[i]}] = true;
            queenPos[{queenX + b * dx[i], queenY + a * dy[i]}] = true;
        }
        ll ans = 0;
        for (auto [pos, _] : kingPos) ans += queenPos.count(pos);
        cout << ans << endl;
    }

    return 0;
}

