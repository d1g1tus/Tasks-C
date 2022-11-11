
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int char_in_list(char a[], int length, int value);
int find_index(char[], int length, int value);
int read_file();

int sleep_time = 5;
float total[4] = {};

float resultado_1;
float A, B, C, D, E, F, G, H, I, J,K,L;

char pedido[4][40] ={};

int main(){
    read_file();

    int count = 0;
    while(count < 3) {
        count = 0;
        while (count < 1) { // POSITION [0]
            char opt_comida_1[4] = {'A', 'B', 'C', 'N'};
            char opt_comida_2[4] = {'a', 'b', 'c', 'n'};
            char menu_comida[4][40] = {"Bocadillo de Jamon", "Bocadillo de lomo", "Bocadillo de Tortilla", "Nada"};
            float precio_comida[4] = {A, B, C, 0};

            puts("Elija la comida deseada \nA] Bocadillo de jamon .........PVP: 6.12$");
            puts("B] Bocadillo de lomo ......PVP: 5.24$\nC] Bocadillo de tortilla ......PVP: 2.50$\nN] Nada");

            fflush(stdin);
            int comida = getchar();

            int opt_1 = char_in_list(opt_comida_1, 4, comida);
            int opt_2 = char_in_list(opt_comida_2, 4, comida);

            if (opt_1 == 1) {
                int index = find_index(opt_comida_1, 4, comida);
                strcpy(pedido[0], menu_comida[index]);
                total[0] = precio_comida[index];
                count += 2; }
            else{
                if(opt_2 == 1){
                    int index = find_index(opt_comida_2, 4, comida);
                    strcpy(pedido[0], menu_comida[index]);
                    total[0] = precio_comida[index];
                    count += 2;
            }
                else {
                    puts("Opcion no disponible, vuelva a intentarlo\n");
                    sleep(sleep_time);
                }}
           }
        count = 0;
        while (count < 1) {// POSITION [1]
            char opt_bebida_1[4] = {'D', 'E', 'F', 'N'};
            char opt_bebida_2[4] = {'d', 'e', 'f', 'n'};
            char menu_bebida[4][40] = {"Cocacola", "Agua", "Cerveza", "Nada"};
            float precio_bebida[4] = {D, E, F, 0};

            puts("Elija su bebida deseada \nD] Cocacola .......PVP: 2$\nE] Agua ...........PVP: 1.50$");
            puts("F] Cerveza ........PVP: 2$\nN] Nada");

            fflush(stdin);
            int bebida = getchar();

            int opt_1 = char_in_list(opt_bebida_1, 4, bebida);
            int opt_2 = char_in_list(opt_bebida_2, 4, bebida);

            if (opt_1 == 1) {
                int index = find_index(opt_bebida_1, 4, bebida);
                strcpy(pedido[1], menu_bebida[index]);
                total[1] = precio_bebida[index];
                count += 2; }
            else{
                if(opt_2 == 1){
                    int index = find_index(opt_bebida_2, 4, bebida);
                    strcpy(pedido[1], menu_bebida[index]);
                    total[1] = precio_bebida[index];
                    count += 2;
                }
                else {
                    puts("Opcion no disponible, vuelva a intentarlo\n");
                    sleep(sleep_time);
                }}
        }
        count = 0;
        while (count < 1) {// POSITION [2]
            char opt_snacks_1[4] = {'G', 'H', 'I', 'N'};
            char opt_snacks_2[4] = {'g', 'h', 'i', 'n'};
            char menu_snacks[4][40] = {"Patatas", "Cacaos", "Olivas", "Nada"};
            float precio_snacks[4] = {G, H, I, 0};

            puts("Elija su snack \nG] Patatas ......PVP: 2.25$\nH] Cacaos........PVP: 2.35$");
            puts("I] Olivas........PVP: 1.50%\nN] Nada");

            fflush(stdin);
            int snacks = getchar();

            int opt_1 = char_in_list(opt_snacks_1, 4, snacks);
            int opt_2 = char_in_list(opt_snacks_2, 4, snacks);

            if (opt_1 == 1) {
                int index = find_index(opt_snacks_1, 4, snacks);
                strcpy(pedido[2], menu_snacks[index]);
                total[2] = precio_snacks[index];
                count += 2; }
            else{
                if(opt_2 == 1){
                    int index = find_index(opt_snacks_2, 4, snacks);
                    strcpy(pedido[2], menu_snacks[index]);
                    total[2] = precio_snacks[index];
                    count += 2;
                }
                else {
                    puts("Opcion no disponible, vuelva a intentarlo\n");
                    sleep(sleep_time);
                }}
        }
        count = 0;
        while (count < 1) { // POSITION [3]
            char opt_cafes_1[4] = {'J', 'K', 'L', 'N'};
            char opt_cafes_2[4] = {'j', 'k', 'l', 'n'};
            char menu_cafes[4][40] = {"Cafe Solo", "Infusion", "Carajillo", "Nada"};
            float precio_cafes[4] = {J, K, L, 0};

            puts("Elija su cafe\nJ] Cafe solo .....PVP: 1$\nK] Infusion ......PVP: 1$\nL] Carajillo .....PVP: 2.75$");
            puts("N] Nada");

            fflush(stdin);
            int cafes = getchar();

            int opt_1 = char_in_list(opt_cafes_1, 4, cafes);
            int opt_2 = char_in_list(opt_cafes_2, 4, cafes);

            if (opt_1 == 1) {
                int index = find_index(opt_cafes_1, 4, cafes);
                strcpy(pedido[3], menu_cafes[index]);
                total[3] = precio_cafes[index];
                count += 2; }
            else{
                if(opt_2 == 1){
                    int index = find_index(opt_cafes_2, 4, cafes);
                    strcpy(pedido[3], menu_cafes[index]);
                    total[3] = precio_cafes[index];
                    count += 2;
                }
                else {
                    puts("Opcion no disponible, vuelva a intentarlo\n");
                    sleep(sleep_time);
                }}

        count = 0;
        while (count < 1) {
            char opt_resultado_1[2] = {'P', 'X'};
            char opt_resultado_2[2] = {'p', 'x'};

            puts("Que desa hacer?\nP] Realizar cuenta\nX] Comenzar de nuevo");

            fflush(stdin);
            int resultado = getchar();

            int opt_1 = char_in_list(opt_resultado_1, 4, resultado);
            int opt_2 = char_in_list(opt_resultado_2, 4, resultado);
            if (opt_1 == -1 | opt_2 == -1){
                puts("Opcion no disponible, vuelva a intentarlo\n");
                sleep(sleep_time);
            }
            else{
                char letra_M[1] = {"P"};
                char letra_m[1] = {"p"};

                if(letra_M[0] == resultado || letra_m[0] == resultado){count += 4;}
                else{count += 2;}
            }
        }

    }
    resultado_1 = total[0] + total[1] + total[2] + total[3];
    puts("\n===================================================\n              TICKET\n===================================================");
    int i = 0;
    int index = 0;
    for(i; i<4; i++){
        if(total[i] != 0){index += 1;printf("\n%i -> %s -- %.2f euros", index, pedido[i], total[i]);}
    }
    puts("\n");
    printf("La cuenta es de %.2f euros\n",resultado_1);
}}
int char_in_list(char a[], int length, int value)
{
    int i;
    for (i=0; i<length; i++){if (a[i] == value){return(1);}}
    return(-1);
}

int find_index(char a[], int length, int value)
{
    int i;
    for (i=0; i<length; i++){if (a[i] == value){return(i);}}
    return(-1);
}
int read_file(){
    FILE *fichero;
    fichero=fopen("C:\\Users\\moher\\CLionProjects\\untitled\\precios.txt","r");
    if (fichero==NULL)
    {
        puts ("Error al abrir el fichero");
        return (1);
    }

    fscanf (fichero,"%f", &A);
    fscanf (fichero,"%f", &B);
    fscanf (fichero,"%f", &C);
    fscanf (fichero,"%f", &D);
    fscanf (fichero,"%f", &E);
    fscanf (fichero,"%f", &F);
    fscanf (fichero,"%f", &G);
    fscanf (fichero,"%f", &H);
    fscanf (fichero,"%f", &I);
    fscanf (fichero,"%f", &J);
    fscanf (fichero,"%f", &K);
    fscanf (fichero,"%f", &L);

    return 1;
}
