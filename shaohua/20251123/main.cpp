#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string a;
    cin >> a;

    int n = a.size();
    vector<bool> visited(n, false);

    int cur = 0;
    int countVisited = 0;

    while (true) {
        if (visited[cur]) {               // 第二次到達 → cycle
            cout << "NO " << a[cur] << endl;
            return 0;
        }

        visited[cur] = true;
        countVisited++;

        if (countVisited == n) {          // 所有 index 都訪問過
            cout << "YES " << a[cur] << endl;
            return 0;
        }

        cur = (cur + (a[cur] - '0')) % n;  // 移動
    }
}
