#include <iostream>

using namespace std;

int main() {
    int n;
    float sum = 0, average=0;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the integers:" << endl;
    for(int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / n;

    cout << "The average is: " << average << endl;

    return 0;
}
