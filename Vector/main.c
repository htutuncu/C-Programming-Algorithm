#include <stdio.h>
#include <math.h>


void print_vector(double normalize_vektor[]){
	int i;
	for(i=0; i<4; i++)
		printf("%.5f  ",normalize_vektor[i]);
}

void normalize_vector(int vektor[]){
	double normalize_vektor[4];
	double norm = 0;
	int i;


	for(i=0; i<4; i++){
		norm += vektor[i] * vektor[i];
	}
	norm = sqrt(norm);

	for(i=0; i<4; i++){
		normalize_vektor[i] = vektor[i] / norm;
	}


	print_vector(normalize_vektor);
}

void scan_vector(FILE* girdi,int vektor[]){
	fscanf(girdi,"%d%d%d%d",&vektor[0],&vektor[1],&vektor[2],&vektor[3]);
	
	normalize_vector(vektor);
}

int main()
{
	FILE* girdi = fopen("input.txt","r");
	int vektor[4];
	scan_vector(girdi,vektor);

	fclose(girdi);
	return 0;
}