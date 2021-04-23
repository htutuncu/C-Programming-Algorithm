//				ADAM ASMACA OYUNU          //

#include <stdio.h>

int main(){

	const int TAHMIN_HAKKI = 15;			// Tahmin haklari ve kelime uzunlugu const olarak tanimlanmistir.
	const int MAKS = 8;


	printf("-- ADAM ASMACA --\n");			// Oyunun baslangic ekrani bastiriliyor.
	printf("Kelime uzunlugu :  %d\n", MAKS);
	printf("Tahmin hakki    :  %d\n", TAHMIN_HAKKI);

	char words[] = {'H', 'A', 'N', 'G', 'M', 'A', 'N'}; // Odevdeki hangman kelimesini kullanarak olusturdum.
	char guessed[TAHMIN_HAKKI];				// Odevde istenen guessed dizisi tanımlandı.
	char tahmin;							// Tahmin edilen karakter.
	int i=0, j=1;
	
	while(i<TAHMIN_HAKKI){					// Dizinin ici '*' karakteri ile dolduruluyor.
		guessed[i] = '*';
		i++;
	}

	
	i=0;	
	while(i <= TAHMIN_HAKKI){				// Tahmin hakki bitene kadar doner.
		printf("Bir sayi tahmin edin : %d\n", j);
		scanf(" %c", &tahmin);				// Kullanici girdikce tahmini saklar.
		
		if(toupper(toupper(tahmin) != words[j - 1]))	// toupper() fonksiyonu karakterleri buyuk harf olarak degistirir.
			printf("Yanlis tahmin! Tekrar deneyin. \n");
		else{
			guessed[i]= tahmin;					// Eger kullanici dogru tahmin ederse bu kisma girer.
			printf("Harika ! Dogru tahmin. \n");
			j++;
		}
		if(j == MAKS)	// Oyun basarili olarak tamamlandiginda bu kisma girerek dongu sonlandirilir.
			break;
		i++;		
	}
	
	if(j == MAKS)
		printf("KAZANDINIZ !!!!!\n");
	else
		printf("KAYBETTINIZ .... \n");
	
	i=0;
	while(i <= TAHMIN_HAKKI){		// Tahmin edilmis olan karakterler ekrana bastirilir ve program sonlanir.
		printf("%c ", guessed[i]);
		i++;
	}

	return 0;
}