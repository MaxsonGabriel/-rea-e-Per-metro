#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");

//-----------------------------------------------------
	
	//Vari�veis:
	float pi =  3.14;
	int raio;
	float area;
	float perimetro;
	
//-----------------------------------------------------
	
	//input usu�rio:
	printf("Digite o raio: \n");
	scanf("%d", &raio);
	
//-----------------------------------------------------
	
	//c�lculos
	
	//�rea:
	int r = pow(raio, 2);
	area = pi * r;
	
	//Per�metro:
	perimetro = 2 * pi * raio;
	
//-----------------------------------------------------
	
	//sa�da:
	printf("\n\n");
	printf( "A area �: %2.f \n"
			"O per�metro �: %2.f\n", area, perimetro);
	
	return 0;
	
}
