#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2)
    {
        cout << "NO" << endl;
    }
    else if (n % 4 == 3)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i << " ";
        }

        cout << n << endl;
        cout << n / 2 + 1 << endl;
        for (int i = 1; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i << " ";
        }
        cout << endl;
    }
    else if (n % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl;
        cout << n / 2 << endl;
        for (int i = 2; i <= n / 2; i += 2)
        {
            cout << i << " " << n - i + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}