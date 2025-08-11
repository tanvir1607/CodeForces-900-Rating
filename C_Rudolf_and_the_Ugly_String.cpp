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
        string str;
        cin >> str;

        int left = 0, ans = 0;
        while(left < size - 2)
        {
            string s = str.substr(left, 3);
            if(s == "map" || s == "pie") ans++, left += 3;
            else left++;
        }
        cout << ans  << endl;
    }
    
    return 0;
}

