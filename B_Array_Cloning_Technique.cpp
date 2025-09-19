// Approach - 1
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
        int size, maxOccur = 0, ans = 0;
        cin >> size;
        vector<int> vec(size);
        map<int, int> freq;
        for (int &x : vec) cin >> x, freq[x]++;
        
        for (auto [key, val] : freq) maxOccur = max(val, maxOccur);
        ans += size - maxOccur;
        while (maxOccur < size) maxOccur *= 2, ans++;
        cout << ans << endl;
    }

    return 0;
}





// Approach - 2
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
        int size, maxOccur = 0, ans = 0;
        cin >> size;
        vector<int> vec(size);
        map<int, int> freq;
        for (int &x : vec) cin >> x, freq[x]++;
        
        for (auto [key, val] : freq) maxOccur = max(val, maxOccur);
        ans += size - maxOccur;
        ans += (int) ceil(log2((float) size / maxOccur));
        cout << ans << endl;
    }

    return 0;
}