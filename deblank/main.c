#include <stdio.h>
#include <string.h>

// deblank fonksiyonu gonderilen string icerisindeki bosluklari temizleyerek ekrana basar.
void deblank(char str[], int size){

	int i=0,j=0,bosluk_sayisi=0;
	char new_str[size];
	
	// bu dongu icerisinde yeni bosluksuz dizi olusturulur.
	while(i<size){
		if(str[i] != ' '){
			new_str[j] = str[i];
			j++;
		}
		i++;
	}
	// yeni bosluksuz dizinin sonuna '\0' konmalidir string olmasi icin.
	new_str[j] = '\0';
	printf("%s\n", new_str);

}


int main(int argc, char const *argv[])
{	
	char str[] = "Bu satirdaki tum bosluklar silinecektir.";
	printf("%s\n\n",str);
	deblank(str,(int)strlen(str));
	
	return 0;
}