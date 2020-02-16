#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

typedef struct{
	float x;
	float y;
	float z;
} vet;

vet rotaten(vet vetor){
	
	
	//var aux
	int alpha = 0;
	float xi,yi,zi =0;
	int numang;	
	
	//num de angs
	printf("\n Digite o numero de angulos a ser digitado:");
	scanf("%d",&numang);
	int angs [numang];

	//scanf angs
	for(int i=0;i<numang;i++){
		printf("\n Digite o angulo %d:",i+1);
		scanf("%d",&angs[i]);
		}
		
		
	//soma angs
	for(int i=0;i<numang;i++){
		alpha = alpha + angs[i];
	}
	
	//conversao grau -> radian
	float rad = (alpha*PI)/180;
	float cost= cos(rad);
	float sen= sin(rad);
	
	printf("\n--------------------");
	printf("\n ang : %d", alpha);
	printf("\n cos : %f", cost);
	printf("\n sin : %f", sen);

	//calc matriz
	xi= (vetor.x*cost)-(vetor.y*sen);
	yi= (vetor.x*sen)+(cost*vetor.y);
	zi= vetor.z;
	
	//atribuição
	vetor.x = xi;
	vetor.y = yi;
	vetor.z = zi;
		
	return vetor;
	
}

int main(){
	
	vet v;
	
	printf("Digite o valor de x:");
	scanf("%f",&v.x);
	printf("Digite o valor de y:");
	scanf("%f",&v.y);
	printf("Digite o valor de z:");
	scanf("%f",&v.z);
	
	/*
	v.x = 2;
	v.y = 3;
	v.z = 3;

	int angs [] = {45,90};
	
	printf("\n x  %f", v.x);
	printf("\n y : %f", v.y);
	printf("\n z : %f", v.z);
	*/
	
	v = rotaten(v);
	
	printf("\n--------------------");
	
	printf("\n x : %f", v.x);
	printf("\n y : %f", v.y);
	printf("\n z : %f", v.z);
	
}
