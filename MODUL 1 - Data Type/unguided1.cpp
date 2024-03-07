#include <iostream> //input preprocessor directive
using namespace std; //supaya tidak perlu menggunakan std:: disetiap input object or function

int main(void) //gunakan void supaya tidak perlu menggunakan return 0 pada akhir code
{
	int panjang, lebar; //mendeklarasikan variabel panjang dan lebar menggunakan tipe data integer

	cout << "Masukkan panjang : "; //fungsi untuk memasukan panjang persegi panjang
	cin >> panjang; //fungsi untuk menampilkan hasil inputan panjang oleh user
	cout << "Masukkan lebar : "; //fungsi untuk memasukan lebar persegi panjang
	cin >> lebar; //fungsi untuk menampilkan hasil inputan lebar pesergi panjang

	float luas = panjang * lebar; //membuat variable dengan nama luas yang dihasilkan oleh perkalian antara panjang dikalikan lebar persegi panjang dengan type data float

	cout << "Luas persegi panjang adalah " << luas << endl; //fungsi untuk menampilkan luas persegi panjang dengan type data float
}

/* 
NOTE :
Kesimpulan dari data pritimive yang merupakan salahsatu type data yang tersedia pada bahasa C++ dan disediakan oleh bahasa pemrograman. 
Ada beberapa contoh type data primitive yaitu seperti int, float, char, boolean, dll. Type data primitive ini juga mendukung operasi dasar
seperti penjumlahan, pengurangan, perkalian dan pembagian. Pemahaman tipe data primitif penting dalam memahami konsep struktur data yang lebih kompleks.
*/