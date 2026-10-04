// Complete media (média das 3 notas de um aluno) e imprimirBoletim (imprime nome e média de cada aluno, e a média da turma 
// ao final).

#include <stdio.h>
#define MAX_NOTAS 3

typedef struct {
    char nome[30];
    float notas[MAX_NOTAS];
} Aluno;

float media(Aluno a) {
    // TODO: retornar a média das 3 notas de a
    float media = 0;
    for (int i = 0; i < MAX_NOTAS; i++)
    {
        media += a.notas[i];
    }
    media = media / MAX_NOTAS;
    
    return media;
}

void imprimirBoletim(Aluno turma[], int n) {
    // TODO: para cada aluno, imprimir "nome: media" (use "%s: %.1f\n")
    // ao final, imprimir "Media da turma: X.X" (use "Media da turma: %.1f\n")
    float turmaMedia = 0;

    for (int i = 0; i < n; i++)
    {
        float alunoMedia = media(turma[i]);
        turmaMedia += alunoMedia;

        printf("%s: %.1f\n", turma[i].nome, alunoMedia);

        alunoMedia = 0;
    }
        turmaMedia = turmaMedia / n;
        printf("Media da turma: %.1f\n", turmaMedia);
    
}

int main() {
    Aluno turma[4] = {
        {"Ana",   {8.0f, 7.5f, 9.0f}},
        {"Bruno", {5.0f, 6.0f, 4.0f}},
        {"Carla", {9.5f, 8.5f, 10.0f}},
        {"Diego", {6.0f, 6.5f, 7.0f}},
    };

    imprimirBoletim(turma, 4);
    
    return 0;
}
