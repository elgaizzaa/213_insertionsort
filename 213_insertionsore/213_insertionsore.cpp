// 213_insertionsore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionsort() {
    int i, n, j, temp;
    int arr[40];

    for(i =1; i<= n-1; i++) { //step1
        temp = arr[i]; //step 2

        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b 
        }

            arr[j + 1] = temp; //step 5
         }
}
int main()


{


    std::cout << "Hello World!\n";
}

