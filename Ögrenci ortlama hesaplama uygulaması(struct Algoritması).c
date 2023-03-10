#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

struct sinif{
    int id;
    char isim[20];
    double vize[2];
    double final;
    double odev;
    double vizeort;
    double genelort;
};

int main () 
{

system("color 0a");
struct sinif asinifi[5];
int i,j;
double genelort;

for(i=0;i<5;i++)
{
    asinifi[i].id=i+1;
    printf("lütfen %d nolu ogrencinin adini giriniz:",asinifi[i].id);
    scanf("%s",asinifi[i].isim);
    printf("lütfen %d nolu ogrencinin odevini giriniz:",asinifi[i].id);
    scanf("%lf",&asinifi[i].odev);
    
    for(j=0;j<2;j++)
    {
        printf("lütfen %d nolu ogrencinin %d. vizesini giriniz:",asinifi[i].id,j+1);
     scanf("%lf",&asinifi[i].vize[j]);
    }
    
    asinifi[i].vizeort=asinifi[i].vize[0]*0.4+asinifi[i].vize[1]*0.6;
    printf("lütfen %d nolu ogrencinin vize ortalamasini giriniz:",asinifi[i].id);
    scanf("%lf",&asinifi[i].vizeort);


    printf("lütfen %d nolu ogrencinin finalini giriniz:",asinifi[i].id);
    scanf("%lf",&asinifi[i].final);
}
 
    system("cls");

for(i=0;i<5;i++)
{
  genelort=asinifi[i].odev*0.25+asinifi[i].vizeort*0.4+asinifi[i].final*0.5;
  
  for(i=0;i<5;i++)
  {
    
    if(genelort>=50)
    {
        printf("%d nolu ogrencinin adi: %s\n\n",asinifi[i].id,asinifi[i].isim);
        printf("sinifi geçtiniz tebrikler\n\n");
    }

      printf("%d nolu ogrencinin adi: %s\n\n");
      printf("Malesef kaldiniz\n\n");

    }
}


return 0;
}