#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças

    //  Constantes
    int MBISPO = 0, MTORRE = 1, MRAINHA = 1;
    //  Variaveis numero de casas
    int NCBISPO = 5, NCTORRE = 5, NCRAINHA = 8;

    // Implementação de Movimentação do Bispo

    for (MBISPO; MBISPO < NCBISPO; MBISPO ++) {
        
        printf("Bispo movimente para cimadiretia\n");
    }

    // Implementação de Movimentação da torre

    while (MTORRE <= NCTORRE) {

        printf("Torre movimenta para a direita\n");
        MTORRE ++;

    } 
    // Implementação de Movimentação da rainha
        do {

            printf("Rainha movimenta para a esquerda\n");
            MRAINHA ++;

           } while (MRAINHA <= NCRAINHA);
                      
       

    return 0;
}
