#include<iostream>
#include <stdlib.h>     
#include <time.h>
#include<ctime>
using namespace std;

int main(){
	int enKucuk, enBuyuk;
	float agirlik;
	int deger;
	int sayilar;
	
	srand(time(NULL));
	
	
	cout << "Rassal degiskenin aldigini en kucuk degeri giriniz: ";
	cin >> enKucuk;
	
	cout << "Rassal degiskenin aldigini en buyuk degeri giriniz: ";
	cin >> enBuyuk;
	
	cout << "Kac adet deger uretmek istiyorsunuz: ";
	cin >> deger;
	
	agirlik = (enBuyuk - enKucuk) / deger; 
	
	int degiskenGecici;
	
	cout << "---------------" << endl;
		
	cout << "=> ";
	
	for(int i = 0; i <= deger; i++)
	{		
 	   degiskenGecici = rand() % (enBuyuk - enKucuk + 1) + enKucuk;
 	   cout <<degiskenGecici << " ";
	}	
	cout << endl;
	cout << "---------------" << endl;
	cout << "=> ";
	for(int i = 0; i<= deger; i++)
	{
		cout << enKucuk +(i * agirlik) << " ";		
	} 	
	return 0;
}
