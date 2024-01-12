#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define nTres 3
#define nCinco 5

//todos los arrays que usare
//arrays para la opcion 1
int arr_opc1_1[nCinco], arr_opc1_2[nCinco], arr_opc1_3[nCinco];
int arr_opc1_53[nCinco][nTres], arr_opc1_35[nTres][nCinco];
//array para la opcion 2
int array_opc2[nCinco][nCinco];

//funcion para el menu
int menu(){
    int n;

    printf("================================================================\n");
    printf("1.- el primero\n");
    printf("2.-matriz de 5x5\n");
    printf("3.-Despedida\n");
    printf("4.-Salir\n");
    printf("ingresa una opcion: ");
    scanf("%d", &n);

    switch (n){
        case 1:
            opc1();
            return 1;
            break;
        case 2:
            opc2();
            return 1;
            break;
        case 3:
            opc3();
            return 1;
            break;
        case 4:
            opc4();
            return 0;
            break;
        default:
            return 1;
            break;  
    }

    return 0;
}

//funcion de la opcion 1
void opc1(){

}

//funcion de la opcion 2
//genera un array random y le cambia el dato de una cordenada
void opc2(){
    llenar_array_opc2();
    printear_arr_opc2();
    recve_data_change();
}

//rellenar array de la opc 2
void llenar_array_opc2(){
    int i, j;
    for (i = 0; i < nCinco; i++){
        for (j = 0; j < nCinco; j++){
            array_opc2[i][j] = rand()%11;
        }
    }
}

//printear array opc2
void printear_arr_opc2(){
    int i, j;

    printf("================================================================\n");
    printf("=aqui esta el array con forma [x][y]a\n");
    
    for (i = 0; i < nCinco; i++){
        for (j = 0; j < nCinco; j++){
            printf("[%d][%d]%d   ",i, j, array_opc2[i][j]);
        }
        printf("\n");
    }
}

//recive datos a cambiar
void recve_data_change(){
    int x, y, c;
    printf("ingresa las cordenadas que deseas cambiar y el valor en forma x y z: ");
    scanf("%d %d %d", &x, &y, &c);
    cambiar_dato_arr_opc2(x, y, c);
}

//cambiar opcion del array de la opc2
void cambiar_dato_arr_opc2(int a , int b , int c){
    array_opc2[a][b] = c;
    printear_arr_opc2();
}

//funcion de la opcion 3
//despedida bonita
void opc3(){
    printf("estos 'seis' meses han sido bastante buenos\nfue bueno aprender C a pesar el estigma que se tiene de este\nle agradesco mucho a usted como profesor y a mis compañeros por lo que me han podido enseñar este semestre :3.");
}

//termina el programa
//funcion de la opcion 4
void opc4(){
    printf("cerrando...");
}

//funcion main
int main(){
    srand(time(NULL));
    do{
        menu();
    } while (menu());    

    return 0;
}
