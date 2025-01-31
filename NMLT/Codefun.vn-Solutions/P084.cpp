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

#include <iostream>
using namespace std;

int main(){
    int n, i = 0;
    int x[100];
    cin >> n;
    while (n != 0) {
        x[i] = n % 2;
        n /= 2;
        i++;
    }
    if (n % 2 == 0) {
        for (int j = i - 1; j >= 0; --j) {
            cout << x[j];
        }
    }
    else for (int j = 0; j < i; ++j) {
        cout << x[j];
    }
    return 0;
}