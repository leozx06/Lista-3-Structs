// Complete valorTotalEstoque (soma preco × quantidade de todos os produtos) e 
// aplicarDesconto (reduz o preço do produto apontado em perc%, alterando o original via ponteiro).

#include <stdio.h>

typedef struct {
    int codigo;
    char nome[20];
    float preco;
    int quantidade;
} Produto;

float valorTotalEstoque(Produto v[], int n) {
    // TODO: retornar a soma de preco * quantidade de todos os produtos
    float totalPreco = 0;
    
    for (int i = 0; i < n; i++)
    {
        totalPreco = totalPreco + (v[i].preco * v[i].quantidade);
    }
    

    return totalPreco;
}

void aplicarDesconto(Produto *p, float perc) {
    // TODO: reduzir p->preco em perc por cento
    p->preco -= p->preco * (perc / 100); //preco = preco - (preco * [perc / 100])
}

int main() {
    Produto estoque[4] = {
        {1, "Mouse",   50.0f, 20},
        {2, "Teclado", 80.0f, 15},
        {3, "Monitor", 600.0f, 8},
        {4, "Cabo",    15.0f, 50},
    };

    printf("Total antes: %.2f\n", valorTotalEstoque(estoque, 4));
    aplicarDesconto(&estoque[2], 10.0f);
    printf("Preco do Monitor apos desconto: %.2f\n", estoque[2].preco);
    printf("Total depois: %.2f\n", valorTotalEstoque(estoque, 4));
    return 0;
}
