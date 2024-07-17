#include <stdio.h>
#include <stdlib.h>
int operand(double *ptr_a, double *ptr_b){
    printf("Enter first operand = ");
    scanf("%lf", &(*ptr_a));
    printf("Enter second operand = ");
    scanf("%lf", &(*ptr_b));
}
int main()
{
	char ch;
	double a, b;
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"if want to exit press x: ");
		scanf(" %c", &ch);
		if (ch == 'x')
			exit(0);
        double* ptr_a = &a;
        double* ptr_b = &b;
		switch (ch) {
		case '+':
            operand(ptr_a, ptr_b);
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;
		case '-':
            operand(ptr_a, ptr_b);
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;
		case '*':
            operand(ptr_a, ptr_b);
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;
		case '/':
            operand(ptr_a, ptr_b);
			printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			break;
		default:
			printf(
				"Error! please write a valid operator\n");
		}
		printf("\n");
	}
}