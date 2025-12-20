#include <iostream>
using namespace std;

//insertion sort algorithm
void insertionSort(int arr[], int n)
{
    //always start from the second element
    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > temp) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}


int main()
{
    int arr[100] = {
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
    //array before the insertion sort
    cout<<"Array before Insertion Sort:"<<endl;
    cout<<"[";
    for(int i=0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;

    insertionSort(arr,100);

    cout<<"Array after Insertion Sort:"<<endl;
    cout<<"[";
    for(int i=0; i<100; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"]"<<endl;
    return 0;
}