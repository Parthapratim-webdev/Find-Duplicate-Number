
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int slow = arr[0], fast = arr[0];

    // Step 1: Detect the cycle
    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    // Step 2: Find the duplicate number
    slow = arr[0];

    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    return slow;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 2};

    int duplicate = findDuplicate(arr);

    cout << "Duplicate number: " << duplicate << endl;

    return 0;
}

