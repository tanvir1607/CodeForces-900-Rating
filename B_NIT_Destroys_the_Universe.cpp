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
        int size, count = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;

        for (int i = 0; i < size; i++)
            if (vec[i] != 0 && (i == 0 || vec[i - 1] == 0)) 
                count++;   
        cout << min(count, 2) << endl;
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
        for (int &x : vec)
            cin >> x;

        int ans = 0;
        bool found = true;
        for (int x : vec)
            if (found && x != 0) ans++, found = false;
            else if (x == 0) found = true;
        cout << min(ans, 2) << endl;
    }

    return 0;
}





// Approach - 3
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
        int size, count_0 = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x, count_0 += x == 0;
        
        int left = 0, right = size - 1;
        while(vec[left] == 0) left++;
        while (vec[right] == 0) right--;
        bool found = false;
        for (int i = left; i < right && !found; i++)
            if (vec[i] == 0) found = true;
        
        if (count_0 == size) cout << 0 << endl;
        else if (!found) cout << 1 << endl;
        else cout << 2 << endl;
    }

    return 0;
}