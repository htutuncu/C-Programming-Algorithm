#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** fact_calc(char[] ,int);


int main() {

    int n;
    char arr[100];


    while(1){
        printf("Enter an integer between 0 and 9 or -1 to quit => ");
        scanf("%d", &n);



        if(n == -1)
            break;

        char** str = fact_calc(arr, n);

        for(int i=0; i<3; i++) 
            printf("%s",str[i]);
        printf("\n");

    } 

    return(0);

}


char** fact_calc(char fac[], int n) {

    unsigned long long fact = 1;
    int i;

    char **str = (char **)malloc(3 * sizeof(char *)); 
    for (i=0; i<3; i++) 
        str[i] = (char *)malloc(300 * sizeof(char));



    if(n == 0) {

        sprintf(str[0],"******************\n");
        sprintf(str[1],"* 0! = 1 = 1 *\n");
        sprintf(str[2],"******************\n");
    }

    else if(n == 1) {
        sprintf(str[0],"****************\n");
        sprintf(str[1],"* 1! = 1 = 1 *\n");
        sprintf(str[2],"****************\n");
    }
    else if((n > 1 && n <= 9)) {

        for(i = 1; i <= n; i++) {
            fact = fact*i;
        }


        sprintf(str[0],"*******");
        for(i = n; i >= 1; i--) {
            strcat(str[0],"*******");
        }
        
        strcat(str[0],"\n");
        
        sprintf(str[1],"* %d! = ", n);

        for(i = n; i >= 2; i--) {
            char tmp[100];
            sprintf(tmp,"%d X ", i);
            strcat(str[1],tmp);
        }

        strcat(str[1],"1 ");

        char tmp2[100];

        sprintf(tmp2,"= %lld *\n", fact);
        strcat(str[1],tmp2);

        
        sprintf(str[2],"*******");
        for(i = n; i >= 1; i--) {
            strcat(str[2],"*******");
        }

        printf("\n");
    }
    else if(n == -1) {
        printf("\n");
    }
    else {
        printf("Invalid Entry\n");
    }
    return str;

}
