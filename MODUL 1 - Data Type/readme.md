# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Agung Malik Ibrahim</p>

## Features

- [Dasar Teori](#dasar-teori)
- [Guided](#guided)
- [Unguided](#unguided)
- [Kesimpulan](#kesimpulan)
- [Referensi](#referensi)

## Dasar Teori

Tipe data adalah suatu memori atau media pada komputer yang digunakan untuk menampung informasi atau data sementara. Dalam C++, terdapat 3 tipe data yang dijelaskan yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi.

### 1. Tipe Data Primitif
<<<<<<< HEAD
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman, compiler dan sistem operasinya. Contoh tipe data primitif adalah :

=======
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman,compiler dan sistem operasinya. Contoh tipe data primitif adalah :
>>>>>>> 4eb369b0438863da7c1ed0c4a9f9027ef958d61d
- Int : adalah tipe data yang digunakan untuk menyimpan bilangan bulat seperti 12, 1, 4, dan sebagainya.
- Float : tipe data yang digunakan untuk menyimpan bilangan desimal seperti 1.5, 2.1, 3.14, dan sebagainya.
- Char : berfungsi untuk menyimpan data berupa sebuah huruf. Biasanya digunakan untuk simbol seperti A, B, C dan seterusnya.
- Boolean : tipe data ini digunakan untuk menyimpan nilai boolean yang hanya memiliki dua nilai yaitu true dan false.

### 2. Tipe Data Abstrak
### 3. Tipe Data Koleksi

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>

using namespace std;

// Main program
int main() 
{
    char op;
    float num1, num2;

    //It allows user to enter operator i.e. +, -, *, /
    cout << "Enter a Operator: " << endl;
    cin >> op;

    //It allows user to enter the operations
    cout << "Enter Number 1 & 2: " << endl;
    cin >> num1 >> num2;

    //Switch statement begins
    switch (op)
    {
    //If user enter +
    case '+':
        cout << num1 + num2;
        break;

    //If user enter -
    case '-':
        cout << num1 - num2;
        break;

    //If user enter *
    case '*':
        cout << num1 * num2;
        break;

    //If user enter /
    case '/':
        cout << num1 / num2;
        break;

    //If the operatior is other that +, -, * or /,
    //error message will display
    default:
        cout << "Error! operator is not correct";
    }//switch statement ends
    return 0;
}
```
Kode di atas digunakan untuk mencetak program yang berisikan untuk menghitung angka sesuai dengan operator yang dipilih. Pada awal program kita menginputkan preprocessor directive, yaitu dengan memanggil `#include <iostream>`. Lalu kita menggunakan `using namespace std` supaya tidak perlu menggunakan std:: disetiap input object or function. Kemudian kita mendeklarasikan tipe data untuk variable yang akan kita buat, character untuk variable `op` dan float untuk variable `num1` dan `num2`. Kemudian kita menggunakan fungsi switch, jika user ingin melakukan operasi penjumlahan, maka bisa menginputkan `+`, pengurangan `-`, perkalian `*`, dan pembagian `/`. Jika user menginputkan operator selain dari `+`, `-`, `*`, dan `/` maka akan muncul pesan `Error! operator is not correct`, jika tidak maka user tinggal memasukan angka 1 dan 2 nya.

### 2. Tipe Data Abstrak

```C++
#include <iostream>
using namespace std;

//struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    //menggunakan struct
    struct Mahasiswa mhs1, mhs2;

    //mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    //mencetak isi struct
    cout << "-----Mahasiswa 1-----" << endl;
    cout << "Nama: " << mhs1.name <<endl;
    cout << "Alamat: " << mhs1.address <<endl;
    cout << "Umur: " << mhs1.age <<endl;
    cout << "-----Mahasiswa 2-----" << endl;
    cout << "Nama: " << mhs2.name <<endl;
    cout << "Alamat: " << mhs2.address <<endl;
    cout << "Umur: " << mhs2.age <<endl;

    return 0;
}
```
Kode di atas digunakan untuk struct mahasiswa dan yang berisikan nama dan address yang bertipe data character. `const` berfungsi untuk menentukan bahwa object atau variable tidak dapat dimodifikasi. Lalu terdapat age yang bertipe data integer. Selanjutnya kita mengisikan data ke dalam struct mahasiswa. Pada main program, kita akan mengisi `mhs1` dan `mhs2` dengan cara memanggil struct yang sudah kita buat, lalu kita tinggal mengisinya. Setelah itu kita menampilkan struct yang sudah diisi dengan menggunakan fungsi `cout`.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;

int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
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

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

```C++
#include <iostream> //input preprocessor directive
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

struct figure { //membuat struct figure
    string name; //berisi variable name yang bertipe data string
    int age; //dan variable age yang bertipe data int

};

class character { //membuat class character
    public:
        string species; //berisi variable species yang bertipe data string
        string citizenship; //variable citizenship yang bertipe data string
        string pets; //variable pets yang bertipe data string
};

int main() { //program utama atau main program
    struct figure one; //memanggil struct figure yang sudah dibuat diatas

    //memasukan data ke dalam struct
    one.name = "Patrick Star"; 
    one.age = 18;

    //menampilkan data struct yang sudah masukan tadi
    cout << "=====STRUCT=====" << endl;
    cout << "Name: " << one.name << endl;
    cout << "Age: " << one.age << endl;

    //memanggil class character
    character two;

    //memasukan data ke dalam class
    two.species = "Starfish";
    two.citizenship = "Bikini Bottom";
    two.pets = "Rocky, Ouchie, Tinkle, Fabio";

    //menampilkan data class yang sudah dimasukkan
    cout << "=====CLASS=====" << endl;
    cout << "Species: " << two.species << endl;
    cout << "Citizenship: " << two.citizenship << endl;
    cout << "Pets: " << two.pets << endl;

    return 0;
}
```
#### Output:
![unguided2](https://github.com/agungibr/data-structure-assignment/assets/91455543/7845a93c-a838-4486-9e2b-aadf9912a114)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map

```C++
#include <iostream> //input preprocessor directive
#include <map> //input map
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

int main() { //main program 
    map <int, string> character; //membuat map dengan key int dan bertipe data string

    //menginputkan karakter
    character[0] = "Spongebob Squarepants";
    character[1] = "Patrick Star";
    character[2] = "Sandy Cheeks";
    character[3] = "Squidward Tentacles";
    character[4] = "Mr. Krabs";

    //menampilkan karakter yang sudah dibuat
    cout << "==========CHARACTER LIST==========" << endl;
    cout << "Karakter pertama : " << character[0] << endl;
    cout << "Karakter kedua : " << character[1] << endl;
    cout << "Karakter ketiga : " << character[2] << endl;
    cout << "Karakter keempat : " << character[3] << endl;
    cout << "Karakter kelima : " << character[4] << endl;

    return 0;
}
```
#### Output:
![unguided3](https://github.com/agungibr/data-structure-assignment/assets/91455543/b1677220-7371-4f6f-ba3c-866843eb5d0c)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.
