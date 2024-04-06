#############################################################################

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#############################################################################

void cria_arquivo(char *nome){
     int i;
     FILE *arquivo;
     arquivo = fopen(nome, "wb");
     if(arquivo == NULL){
                printf("Erro ao tentar criar o arquivo!");
                fflush(stdin);
                getchar();
                exit(-1);
     }
     fprintf(arquivo, "%s\n%d\n","vetor",tamanho);
     for(i = 0; i < tamanho; i++)     {
           fprintf(arquivo, "%5d ", rand()%pontuacao);
     }
    fclose(arquivo);
}

#############################################################################

void mensagem(char abacaxi[]{
     printf("Ok. Sua mensagem \"%s\" foi lida\n", abacaxi);
}

#############################################################################

char msg[80];
    
printf("Digite a mensagem: ");
scanf("%s", msg);

int operando1, operando2;
    
printf("operando 1: ");
scanf("%d", &operando1);
printf("operando 2: ");
scanf("%d", &operando2);

#############################################################################

fflush(stdin);
getchar();

#############################################################################

int soma(int x, int y){
    int s;
    s = x + y;
    return(s);
}

#############################################################################

typedef struct {
        float media1;
        float media2;
} medias_t;

#############################################################################

int fatorial(int valor){
    if (valor <= 1) 
       return(1);
    else
        return(valor * fatorial(valor - 1));
}

printf("fatorial de x: %d\n", fatorial(x));

#############################################################################

int *ponteiro1, *ponteiro2;

    ponteiro1 = (int *)malloc(sizeof(int));
    ponteiro2 = (int *)malloc(sizeof(int));

    printf("valor inteiro 1: ");    
    scanf("%d", ponteiro1);
    printf("valor inteiro 2: ");
    scanf("%d", ponteiro2);
    
    printf("soma: %d", *ponteiro1 + *ponteiro2);
    
    free(ponteiro1);
    free(ponteiro2);

#############################################################################

int x, y, aux;
    int *ponteiro1, *ponteiro2;

    ponteiro1 = (int *)malloc(sizeof(int));
    ponteiro2 = (int *)malloc(sizeof(int));

    printf("valor inteiro 1: ");    
    scanf("%d", &x);
    printf("valor inteiro 2: ");
    scanf("%d", &y);
    
    ponteiro2 = &x;
    ponteiro1 = &y;
    
    printf("soma: %d\n", *ponteiro1 + *ponteiro2);
    printf("soma: %d\n", x + y);
    
    free(ponteiro1);
    free(ponteiro2);

#############################################################################

int i, tam, *vetordeinteiros;

    printf("tamanho do vetor: ");
    scanf("%d", &tam);
    
    vetordeinteiros = (int *)malloc(tam * sizeof(int));
    if (vetordeinteiros == NULL) {
       printf("erro na alocacao de memoria\n");
       fflush(stdin);
       getchar();
       exit(-1);
    }
    
    for (i = 0; i < tam; i++) {
        vetordeinteiros[i] = rand()%MAX;
        printf("%d \n", vetordeinteiros[i]);
    }
    
    free(vetordeinteiros);

#############################################################################

void libera_matriz(char **m, int i){
     for (--i; i >= 0; i--)
         free(m[i]);
     free(m);
}

#############################################################################

char **le_matriz(char *nome_do_arquivo, int *max){
     char **matriz, buffer[100];
     FILE *arquivo; int i;
     arquivo = fopen(nome_do_arquivo, "rb");
     if (arquivo == NULL) {
        printf("erro ao tentar abrir o arquivo %s\n", nome_do_arquivo);
        return NULL;
     }
     matriz = (char **)malloc(sizeof(char *));
     if (matriz == NULL) {
        printf("erro ao tentar alocar memoria\n");
        return NULL;
     }
     
     for (i = 0; !feof(arquivo);) {
           fgets(buffer, 99, arquivo);
           
           matriz[i] = (char *)malloc((strlen(buffer)+1)*sizeof(char));
           if (matriz[i] == NULL) {
              printf("erro ao tentar alocar memoria\n");
              break;
           }
           
           strcpy(matriz[i], buffer);
           matriz[i][strlen(buffer)] = '\0';
           
           matriz = (char **)realloc(matriz, (++i+1)*sizeof(char *));
           if (matriz == NULL) {
              printf("erro ao tentar realocar memoria\n");
              break;
           }
     }
     
     fclose(arquivo);
     *max = i;
          
     return matriz;
}

#############################################################################

fprintf(stdout, "pot: %d\n", pot);
strcpy(perfil[i].nome, mnome[rand()%mnmax]);

#############################################################################

int main(int argc, char **argv)
