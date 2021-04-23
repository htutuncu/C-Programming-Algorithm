/*
Write and test a function that finds and returns through an output parameter
the longest common suffix of two words (e.g., the longest common suffix of
“procrastination” and “destination” is “stination”, of “globally” and “internally”
is “ally”, and of “gloves” and “dove” is the empty string).
*/

#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

void SuffixFinder(char first[], char second[], char suffix[]);

int main()
{
    char first[MAX_LEN];
    char second[MAX_LEN];
    char suffix[MAX_LEN];

    printf("First word: ");
    scanf("%s",first);
    printf("Second word: ");
    scanf("%s",second);

    SuffixFinder(first, second, suffix);
    printf("Longest common suffix is : %s\n", suffix);

    return 0;
}

// Gonderilen dizilerin sondan kac harfinin ayni oldugunu bulur.
// Sondan ayni olan harfleri string haline getirir.
// Suffix stringine bulunan stringi atar.
void SuffixFinder(char first[], char second[], char suffix[])
{
    
    int first_len = strlen(first);     
    int second_len = strlen(second);     
    int suffix_len = 0;    
    int i = first_len - 1;
    int j = second_len - 1; 
    
    while (i >= 0 && j >= 0) {
        if (first[i] != second[j])
            break;
        suffix_len++;
        i--;
        j--;
    }

    strncpy(suffix, &first[first_len - suffix_len], first_len);
}