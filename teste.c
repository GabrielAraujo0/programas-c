

    #include<stdio.h>
    #include < string.h >

    int main() {

        char nome[5][30], aux[30];

        int i, j;

        for (i = 0; i < 5; i++) {

            printf("Entre com o %d%c nome: ", i + 1, 167);

            gets(nome);

        }

        for (j = 0; j < 5; j++)

            for (i = 0; i < 5 - 1; i++)

        {

            if (strcmp(nome, nome[i + 1]) > 0)

            {

                strcpy(aux, nome);

                strcpy(nome, nome[i + 1]);

                strcpy(nome[i + 1], aux);

            }

        }

        printf("\n\nNomes em ordem alfabetica: \n");

        for (i = 0; i < 5; i++)

        {

            printf("%s\n", nome);

        }
}
