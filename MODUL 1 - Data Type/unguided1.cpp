#include <iostream>
using namespace std;

char menu;
float fahrenheit,kelvin,one;

void choice() {
	cout <<"\n=====Temperature Converter Celsius====="<< endl;
	cout << "A. Celsius to Fahrenheit" << endl;
	cout << "B. Celsius to Kelvin" << endl;
	cout << "0. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> menu;
}

float fahr() {
	cout << "Input temperature in Celsius: ";
	cin >> one;

	fahrenheit = (1.8 * one) + 32.0;

	cout << "Temperature in degree Fahrenheit: " << fahrenheit << " F" << endl;
	return fahrenheit = (1.8 * one) + 32.0;
}

float kelv() {
	cout << "Input temperature in Celsius: ";
	cin >> one;

	kelvin = 273.15 + one;

	cout << "Temperature in degree Kelvin: " << kelvin << " K" << endl;
	return kelvin = 273.15 + one;
}

int main() {
    do {
        choice();
        switch (menu) {
            case 'A':
            case 'a':
                fahr();
                break;

            case 'B':
            case 'b':
                kelv();
                break;
                
            case '0':
                cout << "Thank you for using this program. Goodbye!" << endl;
                break;

            default:
                cout << "Error, operator is not correct";
                return 0;
        }
    } while (menu != '0');
    return 0;
}