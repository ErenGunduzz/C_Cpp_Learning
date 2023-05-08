#include<stdio.h>

/*pointer mantigi
int x = 77;
int *p;
p = &x;
// ayni mantikla
p = &x;
*p = x;
*/

void pointer_mantigi(){
    int x, *p;
    x=77;
    p=&x;

    printf("\nx degiskeninin degeri : %d", x);
    printf("\nx degiskeninin adresi : %d", &x);
    printf("\n");
    // *p pointer'dir, dolayisiyla degiskenin degerini tutar
    printf("\n*p in degeri           : %d", *p);
    printf("\n *p=x                  : %1d = %1d", *p, &x);
    printf("\n");

    // p ise degisknin bellekteki adresini tutar
    printf("\np pointer'inin degeri :%d", p);

    printf("\n p=&x  (hex)          : %x=%x", p, &x);
    printf("\n p=&x  (long)         : %1d=%1d", p, &x);
}


void null_pointer(){
    //bir pointer'in hicbir adres isaret etmedigini belirtmek icin kullanilir.
    //aksi halde pointer garbage toplar, yani hh1 deger alabilir.
    int *p1;
    p1 = NULL;
    printf("\nDeger: %x\n", p1);
}

void takas(int *i, int *j){
    //bellekte tutulan degerlerinin degisimi yapilarak degiskenlerinin degisimi yapiliyor
    int t = *i;
    *i = *j;
    *j = t;
}


// **** aciklama **** // 
// *nPtr yapildiginda nPtr degiskenin bellekte tutulan degerleri uzerinde islem 
// yapilarak o deger yine nPtr'nin bellekteki degerine atanir 
// nPtr degeri de *nPtr nin bellekte gosterdigi deger oldugu icin onun degeri de degisir

int kareBul(int *nPtr){
    *nPtr = *nPtr * *nPtr;
    return *nPtr;
}

void pointer_aritmetigi(){
    int arr[10]; //verilsin

    // arr[i] == *(arr + i); esitligi vardir

    // arr = arr + 1 atamasi yapilamaz cunku arr'in gosterdigi adres sabittir,
    // ve belek adreslerine 1 eklenemez 

    //ama
    /* 
    int arr[10];
    int *p1, *p2;
    p1 = arr+3;  //p1 = &arr[3]
    p2 = p1-2;   // p1 = arr[1]
    */

}















void main(){
    pointer_mantigi();
    null_pointer();
    int a = 23, b = 47;
    printf("Once a:%d, b: %d\n", a, b);
    takas(&a, &b);
    printf("Sonra a: %d, b: %d\n", a, b);

    // kare bul 
    int number = 7;
    printf("\nSayinin ilk degeri : %d", number);

    kareBul(&number);
    printf("\nSayinin yeni degeri: %d\n", number);
    pointer_aritmetigi();
}

