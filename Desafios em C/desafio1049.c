#include <stdio.h>
#include <string.h>

typedef struct {
    char nivel1[20];
    char nivel2[20];
    char nivel3[20];
    char animal[20];
} Decisao;

int main() {
    // Tabela de decisão
    Decisao tabela[] = {
        {"vertebrado", "ave", "carnivoro", "aguia"},
        {"vertebrado", "ave", "onivoro", "pomba"},
        {"vertebrado", "mamifero", "onivoro", "homem"},
        {"vertebrado", "mamifero", "herbivoro", "vaca"},
        {"invertebrado", "inseto", "hematofago", "pulga"},
        {"invertebrado", "inseto", "herbivoro", "lagarta"},
        {"invertebrado", "anelideo", "hematofago", "sanguessuga"},
        {"invertebrado", "anelideo", "onivoro", "minhoca"}
    };

    char p1[20], p2[20], p3[20];
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);

    // Procura pela combinação correta
    for (int i = 0; i < 8; i++) {
        if (strcmp(p1, tabela[i].nivel1) == 0 &&
            strcmp(p2, tabela[i].nivel2) == 0 &&
            strcmp(p3, tabela[i].nivel3) == 0) {
            printf("%s\n", tabela[i].animal);
            break;
        }        
    }

    return 0;
}
