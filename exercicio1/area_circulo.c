//Esse programa calcula a área de um círculo.

#include <stdio.h>
#define PI 3.1415 
//o define dá um valor fixo ao pi ao longo do programa.

int main()
{
	float raio, 
              area;

	printf("Entre com o valor do raio\n");
	scanf("%f", &raio);

	area = PI * raio * raio;

	printf("Esse é o valor da área = %.3f\n", area);
	return 0;
}