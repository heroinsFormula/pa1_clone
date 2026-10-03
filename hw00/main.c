#include <stdio.h>
#include <stdlib.h>

int main () {
    int quote_index;
    char test;
    printf("ml' nob:\n");
    int return_val = scanf("%d %c", &quote_index, &test); // consumes an extra char to check for inputs like 1abc
    if (return_val == 2) {
        printf("bIjatlh 'e' yImev\n");
        return EXIT_FAILURE;
    } else if (return_val != 1) {
        printf("Neh mi'\n");
        return EXIT_FAILURE;
    } else if (quote_index > 8 || quote_index < 0) {
        printf("Qih mi' %d\n", quote_index);
        return EXIT_FAILURE;
    }

    printf("Qapla'\n");
    switch (quote_index) {
        case 0:
            printf("noH QapmeH wo' Qaw'lu'chugh yay chavbe'lu' 'ej wo' choqmeH may' DoHlu'chugh lujbe'lu'.\n");
            break;
        case 1:
            printf("bortaS bIr jablu'DI' reH QaQqu' nay'.\n");
            break;
        case 2:
            printf("Qu' buSHa'chugh SuvwI', batlhHa' vangchugh, qoj matlhHa'chugh, pagh ghaH SuvwI''e'.\n");
            break;
        case 3:
            printf("bISeH'eghlaH'be'chugh latlh Dara'laH'be'.\n");
            break;
        case 4:
            printf("qaStaHvIS wa' ram loS SaD Hugh SIjlaH qetbogh loD.\n");
            break;
        case 5:
            printf("Suvlu'taHvIS yapbe' HoS neH.\n");
            break;
        case 6:
            printf("Ha'DIbaH DaSop 'e' DaHechbe'chugh yIHoHQo'.\n");
            break;
        case 7:
            printf("Heghlu'meH QaQ jajvam.\n");
            break;
        case 8:
            printf("leghlaHchu'be'chugh mIn lo'laHbe' taj jej.\n");
            break;
    }

    return EXIT_SUCCESS;
}