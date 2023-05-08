#include<stdio.h>
// arrayler ve pointerlar konu 

int max(int a[], int uzunluk){
	int maks = a[0];

	int i; 
	for (i = 1; i < uzunluk; i++){
		if (a[i] > maks){
			maks = a[i];
		}

	}
	return maks;
}


int main() {
	int sayilar[5] = {3, 4, 42, 100, 1};
	//printf("%d", sayilar[1]);

	//int* p = &sayilar[1]; // array'in bellekte 
	//tutulduğu yerdeki 1. elemaninin konumunu tutar

	//ilk baslangic adresini vermek istersek 
	// 2 yol var 
	//int* p = &sayilar[0]; int* p = sayilar; //ayni seydir
	
	/*
	int* p = sayilar;
	printf("%u\n", p);
	printf("%u\n", p+1); // burada print edilen 2 bellek konumu arasinda 4 fark vardir 
	//bunun nedeni ise arrayin her bir elemaninin bellekte 4 byte olarak saklanmasidir
	printf("p'nin isaret ettigi kutucuk: %d\n", *p);
	printf("%d\n", *(p+1));
	printf("%d\n", *(p+2));
	printf("%d\n", *(p+3));
	// *(p+1) -------> p[1] ayni seydir, sagdaki kisa yoldur,
	// usttekilere gerek yoktur
	

	int maks = max(sayilar, 5);
	printf("sayilar arrayinin en buyuk elemani %d dir", maks);
	*/
	// int *p; deyip
	//printf("%d", *p); dersek rastgele bir bellek konumu tutacagi icin ve 
	// bu konum sistem dosyalari olabilecegi icin hata verir.

 
	return 0;
}