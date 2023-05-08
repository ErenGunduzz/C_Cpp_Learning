#include<stdio.h>
#include<string.h>
// array boyunun makro olarak tanimlanmasi, 
//array bir pointer olarak tanimlaniyor
#define BOY(arr) sizeof(arr) / sizeof(arr[10])
#define ARRAY_BOY(x) (sizeof(x)/sizeof(*x))

int chr_arr_uzunluk() {
	char *kentler[] = { "Ankara", "Mardin", "Edirne" };
	printf("Array'in uzunlugu = %d\n", BOY(kentler));
	return 0;
}
int int_arr_uzunluk(){
	int tekler[] = {1,2,3,4,5,6,7,8,9,};
	printf("Array'in uzunlugu = %d\n", ARRAY_BOY(tekler));
	return 0;
}

int kent_print(){
	int i;
	char *kent[5]={"Van", "Trabzon", "Kayseri", "Mardin", "Adana"};
	for (i=0; i<5;i++){
		printf("kent[%d] = %s \n", i, kent[i]);        
	}
}

int array_toplama(){
    int i, toplam = 0;
    int a[10] = {10,20,30,40,50,60,70,80,90,100};
    for (i=0;i<10;i++){
        toplam += a[i];
    }
    printf("%d\n",toplam);
    return 0;
}

int array_copy(){
    char kaynak[10] = "Hello C", hedef[10];
    //printf("Input a string: \n");
    //gets(kaynak);
    strcpy(hedef, kaynak);
    printf("Kaynak string:   \"%s\"\n", kaynak);
    printf("Hedef string:    \"%s\"\n", hedef);

    return 0;
}

//Dongu ile array kopyalama
void array_copy_loop(){
    short a[] = {21,32,24,35};
    short b[4];

    int i=0;
    for(i=0; i<4;i++){
        b[i] = a[i];
    }   

    for(i=3;i>=0;i--){
        printf("%d\t", b[i]);
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("%d\t\n", b[i]);
    }
}

// array'i loop ile baska arraye copy
void copy_string(char d[], char s[]);



// ****** multi dimensional arrays *****
//bilesenlere erisim 
void multi_dimensional_array(){
    printf("dknşghls\n");
    int i, j;
    int arr[2][3] ;
    int k = 1;
    for(int a = 0; a<2; a++){
        for(int b = 0; b<3; b++){
            arr[a][b] = k;
            k++;
            }
        }
        
    // tablo halinde yaz 
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// matrislerin degerlerinin girilmesi 

void matrix(){
    int matris[3][5];

    //bilesen degerlerini giren dongu 
    int i,j;
    // for columns 
    for(i=0;i<=2;i++){
        // for rows
        for(j=0;j<=4;j++){
            printf("Matrisin a[%d][%d] bilseninin degerini giriniz: ", i, j);
            scanf("%d", &matris[i][j]);
        }
    }
}




// ustteki tum orneklerin calistirlmasi
int main() {
	chr_arr_uzunluk();
	int_arr_uzunluk();
	kent_print();
    array_toplama();
    //array_copy();
    array_copy_loop();
    multi_dimensional_array();
    //matrix();
}
