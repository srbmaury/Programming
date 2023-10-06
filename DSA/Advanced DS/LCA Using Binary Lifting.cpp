#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int dfn[200001], dep[200001], f[200001][21], par[200001], t, n, i, j;
vector<int> g[200001];

void dfs(int v, int p)
{
    dfn[v] += ++t;
    par[v] = p;
    f[v][0] = p;
    dep[v] = dep[p] + 1;
    for (int &child : g[v])
    {
        if (child != p)
        {
            dfs(child, v);
        }
    }
}

int lca(int x, int y)
{
    if (dep[x] < dep[y])
        swap(x, y);
    for (i = 20; i >= 0; i--)
    {
        if (dep[f[x][i]] >= dep[y])
        {
            x = f[x][i];
        }
    }
    if (x == y)
        return x;
    for (i = 20; i >= 0; i--)
    {
        if (f[x][i] != f[y][i])
        {
            x = f[x][i];
            y = f[y][i];
        }
    }
    return f[x][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for (i = 1; i < n; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    dfs(1, 0);
    for (i = 1; i <= 20; i++)
    {
        for (j = 1; j <= n; j++)
        {
            f[j][i] = f[f[j][i - 1]][i - 1];
        }
    }

    return 0;
}
