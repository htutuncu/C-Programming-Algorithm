#include<stdio.h>
#include<string.h>

char* Plural(char str[]);

int main(){
	
   	char noun[][10] = {"chair","dairy","boss","circus","fly","dog","church","clue","dish"};
   	
	for (int i = 0; i < 9; ++i){
   		printf("%s ----> ",noun[i]);
   		printf("%s \n", Plural(noun[i]));
	}
   			
 	return 0;
}	
	
// Bu fonksiyon gonderilen kelimenin son harflerine gore -s takısını ekler.
// Eger y ile bitiyorsa -ies
// s ile bitiyorsa      -es
// ch ile bitiyorsa     -es
// sh ile bitiyorsa     -es
// diger durumlarda      s
// eklemesi yapar ve string halinde geri dondurur.
char* Plural(char str[]){
	
	int len=strlen(str);
	if(str[len-1]=='y'){
		str[len-1]='i';
		str[len]='e';
		str[len+1]='s';	
	}
	else if(str[len-1]=='s'){
		str[len]='e';
		str[len+1]='s';
	}
	else if(str[len-2]=='s' && str[len-1]=='h'){
	    str[len]='e';
		str[len+1]='s';
	}
	else if(str[len-2]=='c' && str[len-1]=='h'){
		str[len]='e';
		str[len+1]='s';
	}
	else{
		str[len]='s';
		str[len+1]='\0';		
	}
	return str;
}
	
	
	