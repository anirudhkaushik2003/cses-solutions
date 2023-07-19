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

    if (n <= 3)
    {
        if(n == 1)
        {
            cout << 1 << endl;
            return;
        }
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        if (n == 4)
        {
            cout << 3 << " " << 1 << " 4 " << 2 << endl;
        }
        else
        {
            for (int i = n; i > 0; i -= 2)
            {
                cout << i << " ";
            }
            for (int i = n - 1; i > 0; i -= 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}