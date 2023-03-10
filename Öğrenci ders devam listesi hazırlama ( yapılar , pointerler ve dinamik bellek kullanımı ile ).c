#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
ögrencinin ders devam listesi için ögrenci adında bir yapı tanımlayın.
bu yapıda ad ,numara,soyad ve vize notu olsun
5 ögrenci için bellek ayırın dinamik olsun
ayrılan belleği 8 ögrenci için genişletin ve kayıtlı ögrencilerin bilgierini ekranaa yazdırın
*/

struct Ogrenci
{   
    int numara;
    char ad[20];
    char soyad[20];
    int vize;

};

int main ()
{
    struct Ogrenci *ogrptr=(struct Ogrenci *) malloc(5* sizeof(struct Ogrenci));
    struct Ogrenci *ptr=ogrptr;
    printf("5 adet ogrenci icin bellekte yer ayrildi: \n");
    int i;
    i=0;
    int numara;
    char ad[20];
    char soyad[20];
    int vize;
    
    while(i<5)
    {	
    printf("%d.  ogrenci bilgilerini giriniz: \n",i+1);
    printf("numara: ");
    scanf("%d", &numara);
    printf("ad: ");
    scanf("%s", &ad);
    printf("soyad: ");
    scanf("%s", &soyad);
    printf("vize: ");
    scanf("%d", &vize);

    
    ptr->numara = numara;
    strcpy( ptr->ad, ad) ;
    strcpy( ptr->soyad, soyad) ;
    ptr->vize = vize;
  

     i++;
     ptr++;
}  
   
    ptr=ogrptr;
    i=0;
    system("cls");
    printf("ogrenci kayit islemi tamamlandı kayitli ogrencilerin bilgileri: \n");
    while(i<5)
    {
        printf("%d. numarali ogrenci bilgileri: \n",ptr->numara);;
        printf("ad    : %s \n",ptr->ad);
        printf("soyad : %s \n",ptr->soyad);
        printf("vize  : %d \n",ptr->vize);
        printf("*********************** \n");
        
        i++;
        ptr++;
    }


    ogrptr=(struct Ogrenci *) realloc( ogrptr, 8* sizeof(struct Ogrenci));
    
    ptr=ogrptr+5;
    i=5;
    while(i<8)
    {
    printf("%d.  ogrenci bilgilerini giriniz: \n",i+1);
    printf("numara: ");
    scanf("%d", &numara);
    printf("ad: ");
    scanf("%s", &ad);
    printf("soyad:  ");
    scanf("%s", &soyad);
    printf("vize: ");
    scanf("%d", &vize);

    ptr->numara = numara;
    strcpy( ptr->ad, ad) ;
    strcpy( ptr->soyad, soyad) ;
    ptr->vize = vize;
  

     i++;
     ptr++;
}

    ptr=ogrptr;
    i=0;
    system("cls");
    printf("ogrenci kayit islemi tamamlandı kayitli ogrencilerin bilgileri: \n");
    while(i<8)
    {
        printf("%d. numarali ogrenci bilgileri: \n",ptr->numara);
        printf("ad    : %s \n",ptr->ad);
        printf("soyad : %s \n",ptr->soyad);
        printf("vize  : %d \n",ptr->vize);
        printf("*********************** \n");
        
        i++;
        ptr++;
    }

    

return 0;
}