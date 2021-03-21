using namespace std;
#include <bits/stdc++.h>
#define ll long long int

int X[] = {1, 0, -1, 0};
int Y[] = {0, 1, 0, -1};
void solve(int l)
{
    ll r, c;
    cin >> r >> c;
    vector<vector<ll>> arr(r, vector<ll>(c));
    set<pair<ll, pair<ll, ll>>> q;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            q.insert({-arr[i][j], {i, j}});
        }
    }
    ll ans = 0;
    while (!q.empty())
    {
        auto hold = *q.begin();
        q.erase(q.begin());
        ll height = -hold.first;
        ll x = hold.second.first;
        ll y = hold.second.second;
        for (int i = 0; i < 4; i++)
        {
            ll nx = x + X[i];
            ll ny = y + Y[i];
            if (nx < 0 || nx == r || ny < 0 || ny == c)
            {
                continue;
            }
            if (arr[nx][ny] >= height - 1)
            {
                continue;
            }
            ll diff = height - 1 - arr[nx][ny];
            ans += diff;
            q.erase({-arr[nx][ny], {nx, ny}});
            arr[nx][ny] = height - 1;
            q.insert({-arr[nx][ny], {nx, ny}});
        }
    }
    cout << "Case #" << l << ": " << ans << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test;
    cin >> test;
    for (int l = 1; l <= test; l++)
    {
        solve(l);
    }
}
