#include<stdio.h>
#define BOY(arr) sizeof(arr) / sizeof(arr[10])
int arr_uzunluk() {
	char *kentler[] =  "Ankara", "Mardin", "Edirne" ;
	printf("Array'in uzunlugu = %d", BOY(kentler));
	return 0;
}

int main() {
	/*deger ve adres farki*/
	printf("degiskenin deger ve adres gosterimi\n");
	int a = 7;
	printf("Value: %d\n", a);
	printf("Adress: %d\n", &a);

	/*pointer bildirimi*/
	printf("pointer bildirimi\n");
	int* p;
	int m = 100;
	p = &m;
	printf("Degiskenin degeri: %d\n", m);
	printf("Degiskenin adresi: %u\n", p);

	/*degiskenin degeri ve pointer arasindaki iliski*/
	printf("\ndegisken degeri ve pointer\n");
	int *nPtr;
	int n;
	n = 10;
	printf("Adres nPtr : %u\n", &nPtr);
	printf("Deger nPtr: %d\n\n", nPtr); // *nPtr denilince bellekte rastgele yere ve sistem dosyalarina gider program kapanir

	nPtr = &n;
	printf("Adres nPtr : &d\n", nPtr);
	printf("Icerik nPtr : %d\n\n", *nPtr);


	/*Pointer alistirmalar1-pointer yardimiyla degiskene erisilmesi*/
	printf("Pointer alistirmalar1 - pointer yardimiyla degiskene erisilmesi");
	int x = 100; // degisken bildirimi
 	int *ptr; // pointer bildirimi

	ptr = &x; // pointer'e degiskenin adresi ataniyor

	printf("Degiskenin adresi    : %x\n", &x);

	//address stored in pointer variable 
	printf("pointer'e atanan adres: %x\n", ptr);

	// access the value using the pointer
	printf("*ptr'nin degeri: %d\n", *ptr);

	// ptr degeri 
	printf("ptr degeri : %d\n", ptr);
	
	/*alistirma_2 - array islemleri*/
	printf("alistirma_2 - array islemleri");

	int arr[10];
	int i, j;
	for (i = 0; i < 10; i++) {
		arr[i] = i + 100;
	}
	//bilesen degerlerini yazma
	for (j = 0; j < 10; j++) {
		printf("arr[%d] = %d\n", j, arr[j]);
	}

	//arrayin bellekteki boyunu bulma
	/*
	char ch;
	int y;
	float z;
	double w;

	int t[5];
	

	printf("char tipine ayrilan yer : %d byte'dir.", sizeof(ch));
	printf("int tipine ayrilan yer : %d byte'dir. \n", sizeof(y));
	printf("float tipine ayrilan yer : %d byte'dir. \n", sizeof(z));
	printf("double tipine ayrilan yer : %d byte'dir. \n", sizeof(w));
	printf("int tipinden a array'ina ayrilan yer : %d byte'dir.\n", sizeof(t));

	//direkt array boyu bulan fonk yok ama su sekilde bulunur
	int boy;
	boy = sizeof(t) / sizeof(t[0]);
	printf("boy: %d", boy);
	*/
	//array'in a adi ile a[0] adreslerinin ayni oldugunu, 
	//sonrakilerinin de ardisik sekilde tutuldugu 

	arr_uzunluk();


	return 0;
}