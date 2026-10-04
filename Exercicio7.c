// Complete ordenarPorNota, que reordena o vetor em ordem decrescente de nota, trocando structs inteiras de posição.

#include <stdio.h>

typedef struct {
    char nome[20];
    float nota;
} Aluno;

void ordenarPorNota(Aluno v[], int n) {
    // TODO: ordenar v em ordem decrescente de nota
    for (int i = 0; i < n; i++)
    {
        
    }
    
}

int main() {
    Aluno turma[5] = {
        {"Ana", 7.0f},
        {"Bruno", 9.5f},
        {"Carla", 6.0f},
        {"Diego", 8.5f},
        {"Elis", 9.5f},
    };
    int i;

    ordenarPorNota(turma, 5);
    for (i = 0; i < 5; i++) {
        printf("%dº: %s (%.1f)\n", i + 1, turma[i].nome, turma[i].nota);
    }
    return 0;
}
