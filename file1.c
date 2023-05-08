#include<stdio.h>
// array boyunun makro olarak tanimlanmasi, 
//array bir pointer olarak tanimlaniyor
#define BOY(arr) sizeof(arr) / sizeof(arr[10])
#define ARRAY_BOY(x) (sizeof(x)/sizeof(*x))

int chr_arr_uzunluk() {
	char* kentler[] = { "Ankara", "Mardin", "Edirne" };
	printf("Array'in uzunlugu = %d\n", BOY(kentler));
	return 0;
}
int int_arr_uzunluk() {
	int tekler[] = { 1,2,3,4,5,6,7,8,9, };
	printf("Array'in uzunlugu = %d\n", ARRAY_BOY(tekler));
	return 0;
}

int kent_print() {
	int i;
	char* kent[5] = { "Van", "Trabzon", "Kayseri", "Mardin", "Adana" };
	for (i = 0; i < 5; i++) {
		printf("kent[%d] = %s \n", i, kent[i]);
	}
}


int main() {
	chr_arr_uzunluk();
	int_arr_uzunluk();
	kent_print();
}