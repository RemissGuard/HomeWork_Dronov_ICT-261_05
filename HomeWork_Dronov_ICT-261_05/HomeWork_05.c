#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL, "RUS");
	double x, y, z, ψ;
	printf("Введите значение переменных\n");
	scanf("%lf\n",&x);
	scanf("%lf\n",&y);
	scanf("%lf",&z);
	ψ = fabs(pow(x,y/x)-pow(y/x,(float)1/3))+(y-x)*((cos(y)-z/(y-x))/(1+pow(y-x,2)));
	printf("\nОтвет: %5.4lf\n", ψ);
}