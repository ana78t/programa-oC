#include <stdio.h>
int main() {
int b = 1;
int r = 1;
    printf("Movimento da torre (direita)\n");
for(int t = 1 ; t <= 5 ; t++){
    printf("Direita\n");
}

printf("\n");
printf("Movimento do bispo (Diagonal)\n");

do
{
    printf("Cima, direita\n");
    b++;
} while (b <= 5 );

printf("\n");
printf("Movimento da Rainha\n");

while (r <= 8)
{
    printf("Esquerda\n");
    r++;
}



    
    return 0;
}




//torre = t
//bispo = b
//rainha = r
//Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
//Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.