#include <iostream>
using namespace std;

int main()
{
    string names[26] = {
        "Victor", "Alice", "Nathan", "Leo", "Quincy", "Emma", "Samuel", "Isabella",
        "Brian", "Karen", "Mona", "Rachel", "David", "Xavier", "Olivia", "Paul",
        "Henry", "Tina", "Umar", "Grace", "Yasmine", "Zack", "Catherine", "Frank",
        "Wendy", "Jack"};

    int n = 26;

    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << ",";
    }
    cout << "]";

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                // swap strings
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    // Print sorted names
    cout << "Sorted Names (A-Z):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i] << ",";
    }

    return 0;
}
