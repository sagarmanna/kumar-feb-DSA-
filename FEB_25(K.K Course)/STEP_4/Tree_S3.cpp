#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);

    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int root = -1;
    for (int i = 1; i <= n; ++i) {
        int degree = adj[i].size();
        if (degree <= 2) {
            root = i;
            break;
        }
    }

    if (root != -1) {
        cout << root << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
