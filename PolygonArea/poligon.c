#include <stdio.h>
#include <math.h>

// get_corners fonksiyonu ödevde istenilen şekilde tanımlandı.
// girdi dosyasını parametre olarak alarak yine parametre olarak alınan X ve Y dizilerini doldurur.
// toplam kac köşe olduğunu return eder.
int get_corners(FILE* girdi,double X[],double Y[],int maksimum_sayi){
    int sayac;
    for(sayac=0; (fscanf(girdi, "%lf %lf", &X[sayac], &Y[sayac])) != EOF; sayac++ );
    return sayac;
}


// out_corners fonksiyonu çıktı dosyasını parametre alarak X ve Y dizilerini doldurur.
// çıktı dosyasına değerleri yazdırır.
void out_corners(FILE* cikti,double X[],double Y[],int sayi){
    int sayac = 0;
    fprintf(cikti,"X \t\t Y \n");
    while(sayac < sayi){
        fprintf(cikti,"%.3f \t\t %.3f \n",X[sayac],Y[sayac]);
        sayac++;
    }
}

// polygon_area fonksiyonu X ve Y dizilerini alarak poligon alanı hesaplaması yapar.
// Kitapta verilen formülü uygulayarak sonucu return eder.
double polygon_area(double X[],double Y[],int sayi){
    int sayac = 0;
    double poligon_alan = 0.0;

    while(sayac < sayi - 3){
        poligon_alan = poligon_alan + (X[sayac+1]+X[sayac])*(Y[sayac+1]-Y[sayac]);
        sayac++;
    }
    return (0.5 * fabs(poligon_alan));
}

int main(){

    const int maksimum_sayi = 20;
    double X_dizi[maksimum_sayi];
    double Y_dizi[maksimum_sayi];

    FILE* girdi = fopen("input.txt","r");
    FILE* cikti = fopen("output.txt","w");
    
    //kac köşe olduğu hesaplaniyor ve sayi degiskenine atılıyor.
    int sayi = get_corners(girdi,X_dizi,Y_dizi,maksimum_sayi);

    // çıktı dosyasına yazım gerçekleşiyor.
    out_corners(cikti,X_dizi,Y_dizi,sayi);

    
    // Poligon alani ekrana bastiriliyor.
    printf("----------------------------------\n");
    printf("Poligonun alani = %.3f birim kare.\n",polygon_area(X_dizi,Y_dizi,sayi));
    
    // açılmış olan dosyalar kapatılıyor ve program sonlaniyor.
    fclose(girdi);
    fclose(cikti);

    return 0;
}