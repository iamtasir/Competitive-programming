#include <bits/stdc++.h>

using namespace std;

// (neighbor, weight)
vector <pair <int, int>> g[100010];
int h[100010], par[20][100010], sub[100010];

// par[i][j] --> node j er 2^i tomo ancestor ke?

// 2^0 tomo == 1st

void go (int u = 1, int p = -1, int far = 0) {
  par[0][u] = p, h[u] = far, sub[u] = 1;
  for (auto [v, w] : g[u]) if (v != p) {
    go(v, u, far + 1);
    sub[u] += sub[v];
    ans += w * sub[v] * (n - sub[v]);
  }
}

int LCA (int u, int v) {
  if (h[u] < h[v]) swap(u, v);
  for (int i = 19; i >= 0; --i) {
    // u er 2^i tomo parent ke
    int anc = par[i][u];
    if (anc != -1 and h[anc] >= h[v]) {
      u = anc;
    }
  }
  // ekhon u ar v same height
  for (int i = 19; i >= 0; --i) {
    int u_anc = par[i][u];
    int v_anc = par[i][v];
    if (u_anc != -1 and u_anc != v_anc) {
      u = u_anc, v = v_anc;
    }
  }
  // ekhon u ar v duitai lca er next level tay
  return par[0][u];
}


int maxOnPath (int u, int v) {
  if (h[u] < h[v]) swap(u, v);
  int result = INT_MIN;
  for (int i = 19; i >= 0; --i) {
    // u er 2^i tomo parent ke
    int anc = par[i][u];
    if (anc != -1 and h[anc] >= h[v]) {
      result = max(result, mx[i][u]);
      u = anc;
    }
  }
  // ekhon u ar v same height
  for (int i = 19; i >= 0; --i) {
    int u_anc = par[i][u];
    int v_anc = par[i][v];
    if (u_anc != -1 and u_anc != v_anc) {
      result = max(result, mx[i][u]);
      result = max(result, mx[i][v]);
      u = u_anc, v = v_anc;
    }
  }
  // ekhon u ar v duitai lca er next level tay
  result = max(result, mx[0][u]);
  result = max(result, mx[0][v]);
  return result;
}

int main() {
  memset(par, -1, sizeof par);
  go();
  for (int i = 1; i < 20; ++i) {
    // par[i][j]
    // par[0][j]...
    for (int j = 1; j <= n; ++j) {
      // node j er 2^i tomo parent ke?
      // node j er 2^(i-1) tomo parent je, tar 2^(i-1) tomo parent
      if (par[i - 1][j] != -1) {
        par[i][j] = par[i - 1][par[i - 1][j]];
        mx[i][j] = max(mx[i-1][j], mx[i-1][par[i-1][j]]);
      }
    }
  }
  return 0;
}

