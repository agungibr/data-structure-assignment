#include <iostream> //input preprocessor directive
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

char menu; //mendeklarasikan variabel menu dengan type data character
float fahrenheit,kelvin,one; //mendeklarasikan variabel dengan type data float

void choice() { //variable choice untuk memilih menu yang ingin digunakan
	cout <<"\n=====Temperature Converter Celsius====="<< endl;
	cout << "A. Celsius to Fahrenheit" << endl;
	cout << "B. Celsius to Kelvin" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> menu;
}

float fahr() { //variable untuk menghitung celcius ke fahrenheit dengan type data float
	cout << "Input temperature in Celsius: ";
	cin >> one;

	fahrenheit = (1.8 * one) + 32.0; //rumus menghitung celsius ke fahrenheit

	cout << "Temperature in degree Fahrenheit: " << fahrenheit << " F" << endl;
	return fahrenheit = (1.8 * one) + 32.0;
}

float kelv() { //variable untuk menghitung celcius ke kelvin dengan type data float
	cout << "Input temperature in Celsius: ";
	cin >> one;

	kelvin = 273.15 + one; //rumus menghitung celsius ke kelvin

	cout << "Temperature in degree Kelvin: " << kelvin << " K" << endl;
	return kelvin = 273.15 + one;
}

int main() { //menu utama
    do { //menggunakan looping do - while
        choice(); //memanggil variable choice
        switch (menu) {
            case 'A': //jika memilih A/a maka akan menghitung fahrenheit
            case 'a':
                fahr();
                break;

            case 'B': //jika memilih B/b maka akan menghitung kelvin
            case 'b':
                kelv();
                break;
                
            case '0': //jika ingin keluar dari looping maka bisa menginputkan angka 0
                cout << "Thank you for using this program. Goodbye!" << endl;
                break;

            default: //jika menginputkan angka selain diatas maka akan muncul message error seperti dibawah ini
                cout << "Error, operator is not correct";
                return 0;
        }
    } while (menu != '0'); //jika user menginputkan angka 0 maka program otomatis berhenti
    return 0;
}