#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Start: ";
    cin >> start;

    cout << "End: ";
    cin >> end;

    for (int i = start; i <= end; i++) {
        cout << i << " ";
    }

    return 0;

}
