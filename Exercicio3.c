// Um Retangulo guarda dois pontos opostos, a e b. Complete area, perimetro e deslocar 
// (por ponteiro, move os dois pontos por dx, dy).

#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto a;
    Ponto b;
} Retangulo;

int area(Retangulo r) {
    // TODO: retornar a área do retângulo (largura * altura)
    int area = 0;

    area = (r.b.x - r.a.x) * (r.b.y - r.a.y);

    return area;
}

int perimetro(Retangulo r) {
    // TODO: retornar o perímetro do retângulo
    int perimetro = 2 * ((r.b.x - r.a.x) + (r.b.y - r.a.y));

    return perimetro;
}

void deslocar(Retangulo *r, int dx, int dy) {
    // TODO: somar dx a x e dy a y dos dois pontos de r
    r->a.x += dx; 
    r->a.y += dy;
    r->b.x += dx;
    r->b.y += dy;
}

int main() {
    Retangulo ret = {{2, 3}, {10, 7}};

    printf("Area: %d\n", area(ret));
    printf("Perimetro: %d\n", perimetro(ret));
    deslocar(&ret, 5, -1);
    printf("Novo a: (%d, %d)\n", ret.a.x, ret.a.y);
    printf("Novo b: (%d, %d)\n", ret.b.x, ret.b.y);
    printf("Area depois: %d\n", area(ret));
    return 0;
}
