#include <stdio.h>

int main(int argc, char *argv[]) {
	float num1; // heigth
	float num2; // weigth
	float num5; // weigth*10000
	float num3; // num1*num1
	float num4; // result(IMC)
	printf("Este es un programa simple para conocer su Indice de Masa Corporal\n");
	printf("ingrese su estatura en centimetros porfavor\n");
	printf("Ejemplo:175cm\n");
	scanf("%f",&num1);
	printf("ingrese su peso en kilogramos\n");
	printf("Ejemplo:60kg\n");
	scanf("%f",&num2);
	num3 = num1 * num1;
	num5 = num2 * 10000;
	num4 = num5 / num3;
	printf("Su indice de masa corporal es:%.2f\n",num4);
	printf("\n+-----------------+-----------------+\n");
	printf("| Clasificacion   | Rango de IMC    |\n");
	printf("+-----------------+-----------------+\n");
	printf("| Bajo peso       | Menos de 18.5   |\n");
	printf("| Normal          | 18.5 - 24.9     |\n");
	printf("| Sobrepeso       | 25.0 - 29.9     |\n");
	printf("| Obesidad        | 30.0 o mas      |\n");
	printf("+-----------------+-----------------+\n");
	
	printf("Muchas gracias.");
	return 0;
}
