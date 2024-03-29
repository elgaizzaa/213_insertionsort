// 213_insertionsore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int arr[40];
int n;
void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 40)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 40 elemen.\n";

        }
    }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen Array" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void insertionsort() {
    int i, n, j, temp;
    int arr[40];

    for (i = 1; i <= n - 1; i++) { //step1
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
    void display() {
        cout << endl;
        cout << "===================================" << endl;
        cout << "Element Array yang telah tersusun" << endl;
        cout << "===================================" << endl;
        for (int j = 0; j < n; j++) {
            cout << arr[j] << endl; // Output setiap element array pada garis baru

        }
        cout << "jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
        cout << endl;
    }
   

    int main()
    {
        input();                                                    //memanggil input
        insertionsort();                                            //memanggil insertionsort
        display();                                              //memanggil display
        system("pause");
        return 0;
    }