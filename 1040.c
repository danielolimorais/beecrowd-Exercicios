int main() {
    double N1, N2, N3, N4, ne, media, media_final;
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;
    printf("Media: %.1lf\n", media);
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &ne);
        printf("Nota do exame: %.1lf\n", ne);
        media_final = (media + ne) / 2.0;
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", media_final);
    }

    return 0;
}