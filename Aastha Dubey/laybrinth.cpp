#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int i, int j, vector<vector<int>>& vis, int n, int r, char a[][1001], vector<char>& par)
{
    int dRow[] = {-1, 0, 1, 0};
    int dCol[] = {0, 1, 0, -1};
    char dir[] = {'U', 'R', 'D', 'L'};

    queue<pair<int, int>> q;
    q.push({i, j});
    vis[i][j] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int k = 0; k < 4; k++) {
            int nrow = x + dRow[k];
            int ncol = y + dCol[k];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < r && a[nrow][ncol] == '.' && !vis[nrow][ncol]) {
                vis[nrow][ncol] = 1;
                q.push({nrow, ncol});

                if (a[nrow][ncol] == 'B') {
                    par.push_back(dir[k]);
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    int n, r;
    cin >> n >> r;
    int flag = 0;
    char a[1001][1001];
    vector<vector<int>> vis(n, vector<int>(r, 0));
    vector<char> par;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            if (!vis[i][j] && a[i][j] == 'A') {
                if (bfs(i, j, vis, n, r, a, par)) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            break;
    }

    if (flag) {
        cout << "YES" << endl;
        for (auto it : par) {
            cout << it;
        }
    } else {
        cout << "NO";
    }

    return 0;
}
//graph