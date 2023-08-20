   
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
    int n, x;
    cin >> n >> x;

    vector<pii> books(n);

    for(int i = 0; i < n;i++)
        cin >> books[i].first;
    
    for (int i = 0; i < n; i++)
        cin >> books[i].second;

    sort(books.begin(), books.end());
    
    vi dp(x+1, 0);
    for(int i = 0; i < n;i++)
    {
        for(int j = x; j >= 0; j--)
        {
            if(j >= books[i].first)
                dp[j] = max(dp[j], dp[j - books[i].first] + books[i].second);
        }

    }
    cout << *max_element(dp.begin(), dp.end()) << endl;



}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        solve();
}