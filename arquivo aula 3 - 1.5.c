#include <stdio.h>
#include <locale.h>


int add(int a, int b) {
  return a + b;
};
int subtract(int a, int b) {
  return a - b;
};
int multiply(int a, int b) {
  return a * b;
};
int divide(int a, int b) {
  return a / b;
};
int main() {
  setlocale(LC_ALL, "");

     int num1, num2;
     printf("Entre com o primeiro número: ");
     scanf("%d", &num1);

     printf("Entre com o segundo número: ");
     scanf("%d", &num2);



     char op;
     printf("Entre com a operação: ");
     scanf("%c", &op);
     getchar();
     // op = getchar();

int result;
    switch (op)
    {
    case '+':
       result = add(num1, num2);
       break;
    case '-':
       result = subtract(num1, num2);
       break;
    case '*':
       result = multiply(num1, num2);
       break;
    case '/':
       result = divide(num1, num2);
       break;
    default:
       printf("\nOperação desconhecida...\n\n");
       return 1;
    }
    printf("\nResultado: %d\n\n", result);

 return 0;
}


