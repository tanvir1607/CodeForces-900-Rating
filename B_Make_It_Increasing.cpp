// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// #define endl '\n'
// #define optimize() ios::sync_with_stdio(false); cin.tie(nullptr);

// int main() 
// {
//     optimize();

//     int test;
//     cin >> test;
//     while (test--)
//     {
//         int size, ans = 0;
//         cin >> size;
//         vector<int> vec(size);
//         for (int &x : vec) cin >> x;
        
//         for (int i = size - 2; i >= 0; i--)
//         {
//             while (vec[i] >= vec[i + 1])
//             {
//                 vec[i] /= 2, ans++;
//                 if (vec[i] == 0) break;
//             }
//             if (vec[i] == 0 && vec[i + 1] == 0)
//             {
//                 ans = -1;
//                 break;
//             }
//         }
//         cout << ans << endl;    
//     }

//     return 0;
// }







// Cleaner Version
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
        int size, ans = 0;
        cin >> size;
        vector<int> vec(size);
        for (int &x : vec) cin >> x;
        
        for (int i = size - 2; i >= 0 && ans != -1; i--)
        {
            while (vec[i] >= vec[i + 1] && vec[i] > 0) vec[i] >>= 1, ans++;
            vec[i] == vec[i + 1] ? ans = -1 : ans;
        }
        cout << ans << endl;    
    }

    return 0;
}