#include <stdio.h>
#include <string.h>

int Palindrom(char arr[], int i, int j){
    if (i > j) 
        return 1;
    

    if (arr[i] != arr[j]) 
        return 0;
    

    return (Palindrom(arr, i + 1, j - 1));
}

int main(){
    char arr[50];

    printf("Enter a sentence: ");
    gets(arr);

    if (Palindrom(arr, 0, strlen(arr) - 1)) 
        printf("%s is a palindrome.", arr);
    else
        printf("%s is not a palindrome.", arr);

    return 0;
}

