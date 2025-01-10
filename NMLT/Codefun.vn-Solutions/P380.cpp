/*
 *
 *    ____  ____        __          ____    ____     ____    ____
 *   |_  _||_  _|      /  \        |_   \  /   _|   |_   \  /   _|
 *     \ \  / /       / /\ \         |   \/   |       |   \/   |
 *      \ \/ /       / ____ \        | |\  /| |       | |\  /| |
 *      _|  |_     _/ /    \ \_     _| |_\/_| |_     _| |_\/_| |_
 *     |______|   |____|  |____|   |_____||_____|   |_____||_____|
 *
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, n, y;
    cin >> a >> b >> c >> n;
    if (a < 0 || b < 0 || c < 0 || a > 10 || b > 10 || c > 10)
        return 0;
    for (int x = -1 * n + 1; x < n; x++) {
        y = a * x * x + b * x + c;
        if (y % 1 == 0 && abs(x) < n && abs(y) < n)
            cout << x << " " << y << " ";
    }
    return 0;
}