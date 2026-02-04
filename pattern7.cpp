#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Top row
    for(int i = 1; i <= n; i++) {
        cout << "* ";
    }
    cout << endl;

    // Middle rows
    for(int i = 1; i <= n; i++) {
        cout << "*";
        cout << endl;
    }

    // Bottom row
    for(int i = 1; i <= n; i++) {
        cout << "* ";
    }

    return 0;
}
