#include <stdio.h> 
  
// Bu fonksiyon dizileri parametre olarak alarak sonuc dizisine birlestirir. Diziler zaten sirali olarak gelmektedir.
void dizileriBirlestir(double dizi1[], double dizi2[], int uzunluk_dizi1, int uzunluk_dizi2, double sonuc[]) 
{ 
    int i = 0, j = 0, k = 0; 
    while (i<uzunluk_dizi1 && j <uzunluk_dizi2) 
    {  
        if (dizi1[i] < dizi2[j]) 
            sonuc[k++] = dizi1[i++]; 
        else
            sonuc[k++] = dizi2[j++]; 
    } 
  
    while (i < uzunluk_dizi1) 
        sonuc[k++] = dizi1[i++]; 
  
    while (j < uzunluk_dizi2) 
        sonuc[k++] = dizi2[j++]; 
} 

// Bu fonksiyon birlestirilmis dizideki tekrar eden elemanlari silerek tekrarsiz ve sirali bir dizi olusturur ve ekrana basar.
int ayniElemanlariSil(double dizi[], int n) 
{  
  
    double gecici_dizi[n];  
    int j = 0; 
    for (int i=0; i<n-1; i++) 
        if (dizi[i] != dizi[i+1]) 
            gecici_dizi[j++] = dizi[i]; 
    gecici_dizi[j++] = dizi[n-1]; 
  
   
    for (int i=0; i<j; i++) 
        dizi[i] = gecici_dizi[i];

    for (int i = 0; i < j; ++i)
     	printf("%.2f \n",dizi[i]);
    
  
    return j; 
} 
  

int main() 
{ 
    double dizi1[] = {-10.5, -1.8, 3.5, 6.3, 7.2}; 
    int uzunluk_dizi1 = sizeof(dizi1) / sizeof(dizi1[0]); 
  
    double dizi2[] = {-1.8, 3.1, 6.3}; 
    int uzunluk_dizi2 = sizeof(dizi2) / sizeof(dizi2[0]); 
  
    double sonuc[uzunluk_dizi1+uzunluk_dizi2]; 
    dizileriBirlestir(dizi1, dizi2, uzunluk_dizi1, uzunluk_dizi2, sonuc); 
  	

    ayniElemanlariSil(sonuc,uzunluk_dizi1+uzunluk_dizi2);
  
    return 0; 
}