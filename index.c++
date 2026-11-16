#include <stdio.h>

int main() {
    float nota;
    float soma_notas = 0.0;
    float maior_nota = -1.0; 
    float menor_nota = 11.0; 
    int total_alunos = 0;
    int aprovados = 0;

    printf("=== Monitor de Performance 'Escola 4.0' ===\n");
    printf("Digite a nota do aluno (0 a 10) ou -1 para encerrar: ");
    scanf("%f", &nota);

    while (nota != -1) {
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida! Digite um valor entre 0 e 10.\n");
        } else {
            soma_notas += nota;
            total_alunos++;

            if (nota > maior_nota) {
                maior_nota = nota;
            }

            if (nota < menor_nota) {
                menor_nota = nota;
            }

            if (nota >= 6.0) {
                aprovados++;
            }
        }

        printf("Digite a proxima nota (ou -1 para encerrar): ");
        scanf("%f", &nota);
    }

    printf("\n=== Relatorio Final ===\n");
    if (total_alunos > 0) {
        float media = soma_notas / total_alunos;
        printf("Media Geral da turma: %.2f\n", media);
        printf("Maior Nota: %.2f\n", maior_nota);
        printf("Menor Nota: %.2f\n", menor_nota);
        printf("Alunos Aprovados (nota >= 6.0): %d\n", aprovados);
    } else {
        printf("Nenhuma nota valida foi registrada.\n");
    }

    return 0;
}