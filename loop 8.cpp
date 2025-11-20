#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Start: ";
    cin >> start;

    cout << "End: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {   // check even
            cout << i << " ";
        }
    }

    return 0;

}
