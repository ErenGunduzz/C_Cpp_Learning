#include<stdio.h>

// call by reference kodlari
void degerdegistir(int *a, int *b) {

	int gecici = *a;
	*a = *b;
	*b = gecici; 

}





//call by value kodlari
/*degerdegistir(int a, int b) {

	int gecici = a;
	a = b;
	b = gecici;

	printf("a:%d b:%d\n", a, b);
}*/

int main() {
	/*int i = 5;

	int j;

	//inputting

	//& adres bilgisini alarak scanf ile alinan inputu o adrese koyar.
	//scanf("%d", &j);

	// **** i'nin yerini tutan pointer tanimlanmasi 
	
	int *p = &i;

	//sadece p yapinca bellekte tutulan yerin konumu verir
	printf("%p\n", p);
	// * adresteki degeri verir.
	printf("%d", *p);

	// ders 2
	int a = 5, *ap;
	float b = 3.2, * bp;
	double c = 3.412, *cp;
	char d = 'a', *dp;

	int sayilar[5] = { 1, 2, 3, 4, 5 };

	int *arrayp;

	ap = &a;
	bp = &b;
	cp = &c;
	dp = &d;

	arrayp = &sayilar[1];
	printf("%p adresindeki intin degeri %d dir.\n", ap, *ap);
	printf("%p adresindeki float degeri %f dir.\n", bp, *bp);
	printf("%p adresindeki double degeri %d dir.\n", cp, *cp);
	printf("%p adresindeki char degeri %d dir.\n", dp, *dp);
	printf("%p adresindeki array degeri %d dir.\n", arrayp, *arrayp);*/


	//******************
	/*
	int i, j = 1;
	int *jp1, *jp2 = &j; // burda sadece jp2'ye j yi atiyor.
	jp1 = jp2; // jp1 de j nin yerini gosterir
	i = ++(*jp2); // jp2nin yani j nin degerini 1 artırarak i ye esitler
	*jp2 = *jp1 + i;
	printf("i = %d, j = %d, *jp1 = %d, *jp2 = %d\n", i, j, *jp1, *jp2);
	*/

	//*****3.ders Call by value kodlari
	/*
	int x = 5, y = 10;
	degerdegistir(x, y);
	//burada fonksiyon biter ve a ve b degerleri yok olur 

	printf("x: % d y : % d", x, y);
	//degerdegistir fonksiyonunda a ve b degerleri sadece
	// fonksiyon calistigi zaman yaratilir bu yuzden 
	// main fonksiyonunda sonradan x ve y degerleri degismemis olur
	//***call by value*** denir sadece degerleri kopyalanir a ve b nin 
	return 0;
	*/

	//****** call by reference kodlari
	//burada direkt olarak bellekteki konumlari degistirilmis olur
	//int x = 5, y = 10;
	//degerdegistir(&x, &y);

	//printf("x:%d y:%d", x, y);

	// *********************************** // 
	// array ve pointer 
	printf("Hello");
}	