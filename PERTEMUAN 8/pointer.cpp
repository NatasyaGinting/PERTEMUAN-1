#include <iostream>
using namespace std;

void penjumlahan(int* a, int* b) {
    *a += *b;
    cout << *a << endl;
}

int main() {
    system("cls");  // membersihkan tampilan layar


    // Pointer Declaration (Deklarasi Pointer)
    // normal variable -> var_name(data), &var_name(address)
    int number = 16;

    // pointer variable -> var_name(address of pointed variable), *var_name(data of pointed variable)
    int* ptrnumber = &number;

    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;
    cout << "Alamat variabel ptrnumber : " << &ptrnumber << endl;


    // Pointer Operation (Operasi Pointer)
    *ptrnumber = 37;
    cout << "Isi variabel number : " << number << endl;
    cout << "Alamat variabel number : " << &number << endl;
    cout << "Isi variabel ptrnumber : " << ptrnumber << endl;
    cout << "Isi variabel yang ditunjuk ptrnumber : " << *ptrnumber << endl;
    cout << "Alamat variabel ptrnumber : " << &ptrnumber << endl;


    // Pointer in Array (Pointer dalam array)
    int num[] = {1, 2, 3, 4, 5};
    int* ptrnum = num;

    cout << "Isi variabel num indeks 0 = " << num[0] << endl;
    cout << "Alamat memori variabel num indeks 0 = " << &num[0] << endl;
    cout << "Isi variabel ptrnum = " << ptrnum << endl;
    cout << "Isi variabel yang ditunjuk oleh ptrnum = " << *ptrnum << endl;


    // Pointer as Parameter (Pointer sebagai Parameter)
    int a = 2;
    int b = 3;
    penjumlahan(&a, &b);
    cout << a << endl;


    // Pointer to Pointer (Pointer ke Pointer)
    int n = 4;
    int* ptrn = &n;
    int** ptr_ptrn = &ptrn;

    cout << "Isi variabel n = " << n << endl;
    cout << "Alamat variabel n = " << &n << endl;
    cout << "Isi variabel ptrn = " << ptrn << endl;
    cout << "Isi variabel yang ditunjuk ptrn = " << *ptrn << endl;
    cout << "Alamat variabel ptrn = " << &ptrn << endl;
    cout << "Isi variabel ptr_ptrn = " << ptr_ptrn << endl;
    cout << "Isi variabel yang ditunjuk oleh ptr_ptrn = " << *ptr_ptrn << endl;
    cout << "Isi variabel n diakses dari ptr_ptrn = " << **ptr_ptrn << endl;
    cout << "Alamat memori ptr_ptrn = " << &ptr_ptrn << endl;


    // Dynamic Pointer (Pointer Dinamis)
    int* ptr = new int;    // Memory Allocation (alokasi memori)
    *ptr = 24;
    cout << "Isi variabel ptr = " << ptr << endl;
    cout << "Data yang ada di variabel ptr = " << *ptr << endl;
    delete ptr;    // Memory Deallocation (dealokasi memori)
    cout << "Isi variabel ptr = " << ptr << endl;
    cout << "Data yang ada di variabel ptr = " << *ptr << endl;
}