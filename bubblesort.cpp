#include <iostream>
#include <string>
using namespace std;

/*the thing that might wonders you is that why we use the double loop */

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
}

 int main(){
    
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

    cout<<"Before the Bubble Sorting"<<endl;
     cout<<"[";
    for(int i = 0; i < n;i++){
    cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
    cout<<string(60,'-')<<endl;
    
    bubbleSort(arr,n);
     cout<<"Before the Bubble Sorting"<<endl;
    cout<<"[";
    for(int i = 0; i < n;i++){
    cout<<arr[i]<<",";
    }
    cout<<"]"<<endl;
return 0;
}