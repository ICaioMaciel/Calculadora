#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void header(){
    printf("-----------------------\n");
    printf("|=====================|\n");
    printf("|==== Calculadora ====|\n");
    printf("|=====================|\n");
    printf("-----------------------\n");
}

void menu(){
    setlocale(LC_ALL,"");
    char choice;

    printf("------------------------------\n");
    printf("|== Operações Aritimeticas ==|\n");
    printf("------------------------------\n\n");

    printf("1 -  Adição (+)\n");
    printf("2 -  Subtração (-)\n");
    printf("3 -  Multiplicação (x)\n");
    printf("4 -  Divisão (/)\n\n");
    printf("5 -  Sair (q)\n");
    
    printf("--> ");
    scanf("%s", &choice);

    switch (choice){
        case '+':
            sum(); //retorna a função de adição
        break;

        case '-':
           subtraction(); //retorna a função de subtração
        break;

        case 'x':
            multiplication(); //retorna a função de multiplicação
        break;

        case '/':
            division(); //retorna a função de divisão
        break;

        case 'q':
            system("exit");
            printf("Finalizando...\n");
        break;

        default:
            printf("Comando invalido!\n");
            printf("Tente novamente...");
            system("pause");
            system("cls");
            menu();
        break;
            
    }
}

void sum(){
    double number_a, number_b, result;
    printf("---------------------------------\n");
    printf("|============ Soma =============|\n");
    printf("---------------------------------\n");

    printf("Digite o primeiro número: ");
    printf("--> ");
    scanf("%lf", &number_a);

    printf("Digite o segundo número: ");
    printf("--> ");
    scanf("%lf", &number_b);

    result = number_a + number_b;

    printf("Resultado: %.2lf\n", result);

    system("pause");
    system("cls");
    menu();
}

void subtraction(){
    double number_a, number_b, result;
    printf("---------------------------------\n");
    printf("|========== Subtração ===========|\n");
    printf("---------------------------------\n");

    printf("Digite o primeiro número: ");
    printf("--> ");
    scanf("%lf", &number_a);

    printf("Digite o segundo número: ");
    printf("--> ");
    scanf("%lf", &number_b);
    
    result = number_a - number_b;
    
    printf("Resultado: %.2lf\n", result);

    system("pause");
    system("cls");
    menu();
}

void multiplication(){
    double number_a, number_b, result;

    printf("---------------------------------\n");
    printf("|======== Multiplicação ========|\n");
    printf("---------------------------------\n");

    printf("Digite o primeiro número: ");
    printf("--> ");
    scanf("%lf", &number_a);

    printf("Digite o segundo número: ");
    printf("--> ");
    scanf("%lf", &number_b);
    
    result = number_a * number_b;
    
    printf("Resultado: %.2lf\n", result);

    system("pause");
    system("cls");
    menu();
}

void division(){
    double number_a, number_b, result;

    printf("---------------------------------\n");
    printf("|=========== Divisão ===========|\n");
    printf("---------------------------------\n");

    printf("Digite o primeiro número: ");
    printf("--> ");
    scanf("%lf", &number_a);

    printf("Digite o segundo número: ");
    printf("--> ");
    scanf("%lf", &number_b);
    
    result = number_a / number_b;
    
    printf("Resultado: %.2lf\n", result);

    system("pause");
    system("cls");
    menu();
}

int main(){
    header();
    menu();
    system("pause");
}