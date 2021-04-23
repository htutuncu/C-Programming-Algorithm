/**
Write a program that takes data a line at a time and reverses the words of the
line. For example,
Input: birds and bees
Reversed: bees and birds
The data should have one blank between each pair of words.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int tokenize(char**,char str[]);
void reverse(char** arr,int word_count);

int main(int argc, char const *argv[])
{
	char* str = (char *)malloc(100 * sizeof(char));
	printf("Input:");
	scanf(" %[^\n]", str);

	char* arr[10];
	for (int i=0; i<10; i++) 
        arr[i] = (char *)malloc(100 * sizeof(int)); 
	

	int word_count = tokenize(arr,str);
	reverse(arr,word_count);
	

	printf("Reversed:");
	for (int i = 0; i < word_count; ++i)
		printf("%s ",arr[i]);

	return 0;
}

// gonderilen stringi iki boyutlu diziye parcalar.
// kac kelime oldugunu return eder.
int tokenize(char** arr,char str[]){

	int i;
	char* token = strtok(str, " ");
	for (i = 0; token != NULL; ++i)
	{
		arr[i] = token;
		token = strtok(NULL, " ");
	}
	
	return i;
}

// gonderilen iki boyutlu dizinin icindeki kelimeleri ters cevirir.
void reverse(char** arr,int word_count){
	char* temp[word_count];
	for (int i=0; i<word_count; i++) 
        temp[i] = (char *)malloc(100 * sizeof(int));


    int j=word_count-1;
    for (int i = 0; i < word_count; ++i)
    	temp[i] = arr[j--];
    
    for (int i = 0; i < word_count; ++i)
    	arr[i] = temp[i];
}