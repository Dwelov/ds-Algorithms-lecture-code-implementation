#include <iostream>
using namespace std;

int main() {
    //so basically in linear search we traverse the array from start to end
    // look the specific value in array until we find it
    //else we return a confirmation message that the value not found if not found
    int n;
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

    cout<<"Enter the number you want to search in the array."<<endl;
    cin >> n;
    for(int i=0;i<100;i++){
        if(arr[i]==n){
            cout<<"The number "<<n<<" is found at index "<<i<<endl;
            break;
        }else{
            cout<<"The number "<<n<<" is not found in the array."<<endl;
        }
    }

    //method 2
    //in this method i will try to solve the problem according to the algorithm mentioned in book
    cout<<"Enter the number you want to search in the array."<<endl;
    cin >> n;
    int i=0;
    while(i<=n){
        if(arr[i]==n){
            cout<<"The number "<<n<<" is found at index "<<i<<endl;
            break;
        }
        i = i + 1;
    }
    return 0;    
}