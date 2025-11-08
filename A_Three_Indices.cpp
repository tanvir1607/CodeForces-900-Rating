// Approach - 01 --> Bruteforce
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

        bool found = false;
        for (int j = 1; j < size - 1 && !found; j++)
        {
            int i = -1, k = -1;
            for (int left = 0; left < j && i == -1; left++)
                if (vec[left] < vec[j]) i = left;

            for (int right = j + 1; right < size && k == -1; right++)
                if (vec[j] > vec[right]) k = right;
            
            if (i != -1 && k != -1)
                found = true,
                cout << "YES" << endl << ++i << " " << ++j << " " << ++k << endl;
        }
        if (!found) cout << "NO" << endl;
        
    }

    return 0;
}





// Approach - 02 --> 3 pointers
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
        
        int i = 0, j = 1, k = 2;
        bool found = false;
        for ( ; k < size && !found; i++, j++, k++)
            if (vec[i] < vec[j] && vec[j] > vec[k]) found = true;
        
        if (found) cout << "YES" << endl << i << " " << j << " " << k << endl;
        else cout << "NO" << endl;
    }

    return 0;
}





// Approach - 03
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
        
        int idx = 0;
        bool found = false;
        for ( ; idx < size - 2 && !found; idx++)
            if (vec[idx] < vec[idx + 1] && vec[idx + 1] > vec[idx + 2])
                found = true;

        if (found) cout << "YES" << endl 
                        << idx << " " << ++idx << " " << ++idx << endl;
        else cout << "NO" << endl;
    }

    return 0;
}


