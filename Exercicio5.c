// Complete reajustar (aumenta o salário do funcionário apontado em perc%) e
//  maiorSalario (retorna o endereço do maior salário).

#include <stdio.h>

typedef struct {
    char nome[30];
    char cargo[20];
    float salario;
} Funcionario;

void reajustar(Funcionario *f, float perc) {
    // TODO: aumentar f->salario em perc por cento
    f->salario += f->salario * (perc / 100);
}

Funcionario *maiorSalario(Funcionario v[], int n) {
    // TODO: retornar o endereço do funcionário com maior salário
    Funcionario *temp = &v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i].salario > temp->salario)
        {
            temp = &v[i];
        }
    }
    
    return temp;
}

int main() {
    Funcionario equipe[5] = {
        {"Marcos",  "Analista", 3200.0f},
        {"Julia",   "Gerente",  5400.0f},
        {"Paulo",   "Estagiario", 1200.0f},
        {"Renata",  "Analista", 3400.0f},
        {"Sergio",  "Diretor",  8000.0f},
    };
    int i;
    Funcionario *top;

    for (i = 0; i < 5; i++) {
        reajustar(&equipe[i], 8.0f);
    }
    top = maiorSalario(equipe, 5);
    printf("Maior salario apos reajuste: %s - %.2f\n", top->nome, top->salario);
    printf("Salario da Julia apos reajuste: %.2f\n", equipe[1].salario);
    return 0;
}
