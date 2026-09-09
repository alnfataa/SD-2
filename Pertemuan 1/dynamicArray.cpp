#include <iostream>
using namespace std;

int main() {
int n;

cout <<"Masukan Jumblah Elemen Array :";
cin >> n;

int* arr = new int[n]; //ini logika dynamic array // int* arr = new int[n]

cout << "Masukan " << n << "Angka :\n";
for (int i=0; i< n; i++){
    cin >> arr[i];
}

cout << "isi Array : ";
for(int i = 0; i < n; i++){
    cout << arr[i] << " ";

}

delete[] arr; // fungis -> new -> delete. harus ada delete nya
return 0;

}

