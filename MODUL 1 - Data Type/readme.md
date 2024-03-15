# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Agung Malik Ibrahim</p>

## Dasar Teori

Berikan penjelasan teori terkait materi modul ini dengan bahasa anda sendiri serta susunan yang terstruktur per topiknya.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;

int main() 
{
    char op;
    float num1, num2;

    cin >> op;
    cin >> num1 >> num2;

    switch (op)
    {
    case '+':
        cout << num1 + num2;
        break;
    case '-':
        cout << num1 - num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    case '/':
        cout << num1 / num2;
        break;
    default:
        cout << "Error! operator is not correct";
    }
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    struct Mahasiswa mhs1, mhs2;

    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs1.age);
    return 0;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
}
```
Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream> //input preprocessor directive
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

char menu; //mendeklarasikan variabel menu dengan type data character
float fahrenheit,kelvin,one; //mendeklarasikan variabel dengan type data float

void choice() { //variable choice untuk memilih menu yang ingin digunakan
    cout <<"\n=====Temperature Converter Celsius====="<< endl; //menu
    cout << "A. Celsius to Fahrenheit" << endl;
    cout << "B. Celsius to Kelvin" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> menu;
}

float fahr() { //variable untuk menghitung celcius ke fahrenheit dengan type data float
    cout << "Input temperature in Celsius: "; //menginputkan suhu dalam celsius
    cin >> one;

    fahrenheit = (1.8 * one) + 32.0; //rumus menghitung celsius ke fahrenheit

    cout << "Temperature in degree Fahrenheit: " << fahrenheit << " F" << endl;
    return fahrenheit = (1.8 * one) + 32.0;
}

float kelv() { //variable untuk menghitung celcius ke kelvin dengan type data float
    cout << "Input temperature in Celsius: "; //menginputkan suhu dalam celcius
    cin >> one;

    kelvin = 273.15 + one; //rumus menghitung celsius ke kelvin

    cout << "Temperature in degree Kelvin: " << kelvin << " K" << endl; //menampilkan hasil
    return kelvin = 273.15 + one;
}

int main() { //menu utama
    do { //menggunakan looping do - while
        choice(); //memanggil variable choice
        switch (menu) {
            case 'A': //jika memilih A/a maka akan menghitung fahrenheit
            case 'a':
                fahr(); //menampilkan variable celcius ke fahrenheit
                break;

            case 'B': //jika memilih B/b maka akan menghitung kelvin
            case 'b':
                kelv(); //menampilkan variable celsius ke kelvin
                break;
                
            case '0': //jika ingin keluar dari looping maka bisa menginputkan angka 0
                cout << "Thank you for using this program. Goodbye!" << endl;
                break;

            default: //error message jika menginputkan selain huruf a, b, dan angka 0
                cout << "Invalid input. Please enter either 'A', 'B', or '0'." << endl;
                break;
        }
    } while (menu != '0'); //jika user menginputkan angka selain 0 maka program otomatis akan mengulang hingga user menginputkan angka 0 untuk mengakhiri loop
    return 0;
}
```
#### Output:
![unguided1](https://github.com/agungibr/data-structure-assignment/assets/91455543/30c84b01-ab8b-492d-83ff-f1ad57383f98)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.