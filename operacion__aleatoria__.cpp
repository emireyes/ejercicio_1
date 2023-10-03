 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  

    int opcion;
    do {
        int num1 = rand() % 11; 
        int num2 = rand() % 11; 

        printf("Numero 1: %d\n", num1);
        printf("Numero 2: %d\n", num2);

        printf("Elige una operacion:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("5. Terminar el programa\n");

        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Resultado de la suma: %d\n", num1 + num2);
                break;
            case 2:
                printf("Resultado de la resta: %d\n", num1 - num2);
                break;
            case 3:
                printf("Resultado de la multiplicacion: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Resultado de la division: %.2lf\n", (double)num1 / num2);
                } else {
                    printf("No se puede dividir por 0.\n");
                }
                break;
            case 5:
                printf("Programa terminado.\n");
                break;
            default:
                printf("Opción no válida. Intentalo de nuevo.\n");
                break;
        }

    } while (opcion != 5);

    return 0;
}

