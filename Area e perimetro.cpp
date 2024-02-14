#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>



int main(){
	
	setlocale(LC_ALL, "Portuguese");

//-----------------------------------------------------
	
	//Variáveis:
	float pi =  3.14;
	int raio;
	float area;
	float perimetro;
	
//-----------------------------------------------------
	
	//input usuário:
	printf("Digite o raio: \n");
	scanf("%d", &raio);
	
//-----------------------------------------------------
	
	//cálculos
	
	//Área:
	int r = pow(raio, 2);
	area = pi * r;
	
	//Perímetro:
	perimetro = 2 * pi * raio;
	
//-----------------------------------------------------
	
	//saída:
	printf("\n\n");
	printf( "A area é: %2.f \n"
			"O perímetro é: %2.f\n", area, perimetro);
	
	return 0;
	
}
