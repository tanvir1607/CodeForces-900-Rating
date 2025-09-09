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
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        for (int i = 0; i < size; i++)
            if (vec[i] == 1) vec[i]++;
        for (int i = 1; i < size; i++)
            if (vec[i] % vec[i - 1] == 0) vec[i]++;

        for (int x : vec) cout << x << " ";
        cout << endl;
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
        int size;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x, x += (x == 1);

        for (int i = 1; i < size; i++)
            if (vec[i] % vec[i - 1] == 0) vec[i]++;

        for (int x : vec) cout << x << " ";
        cout << endl;
    }

    return 0;
}