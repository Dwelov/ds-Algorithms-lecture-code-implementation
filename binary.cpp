/* 
Binary Search is a way to find something in a sorted list (numbers in increasing order, or words in 
alphabetical order). Instead of checking one by one (like Linear Search), you keep cutting the list in half
until you find your target.
Rules are quite simple:
- Find the middle point of the list and compare it with the x you are searching.
- If x is greater than the mid then discard the left half (search only the elements on the right).
- Otherwise, discard the right half (search only the elements on the left).
*/

#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    // the first step is to sort the array
    sort(arr, arr + n);

    int i = 0;          // left index
    int j = n - 1;      // right index
    int index = -1;     // default: not found

    while (i <= j) {
        int m = (i + j) / 2; // midpoint

        if (x == arr[m]) {
            cout << "Match found at index " << m << endl;
            index = m;
            break;
        }

        // search left or right depending on comparison
        if (x > arr[m]) {
            i = m + 1;
        } else {
            j = m - 1;
        }
    }

    return index; // returns index if found, -1 if not
}

int main() {
    
    int arr[] = {
        23, 4343, 12, 98, 456, 77, 321, 654, 89, 102,
        345, 876, 231, 567, 999, 432, 111, 765, 222, 888,
        45, 678, 901, 234, 567, 890, 123, 456, 789, 321,
        654, 987, 213, 546, 879, 132, 465, 798, 246, 579,
        802, 135, 468, 791, 246, 357, 468, 579, 680, 791,
        892, 903, 14, 25, 36, 47, 58, 69, 70, 81,
        92, 103, 114, 125, 136, 147, 158, 169, 170, 181,
        192, 203, 214, 225, 236, 247, 258, 269, 270, 281,
        292, 303, 314, 325, 336, 347, 358, 369, 370, 381,
        392, 403, 414, 425, 436, 447, 458, 469, 470, 481
    };

    // determining the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // passing the values to the function
    int result = binarySearch(arr, n, 25);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
        cout << "Value: " << arr[result] << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
