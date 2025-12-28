#include <iostream>
using namespace std;

bool isMultipleOf5(int n) {
    int last = n - (n / 10) * 10;   // extract last digit

    if (last == 0 || last == 5)
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    cout << (isMultipleOf5(n) ? "YES" : "NO");
}
