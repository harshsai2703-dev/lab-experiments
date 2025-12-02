#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size, new_size;
    char *str, temp[100];

    printf("Enter initial size of the string: ");
    scanf("%d", &size);

    str = (char *)malloc(size * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf("%s", str);

    printf("String entered: %s\n", str);

    printf("Enter new size to expand the string: ");
    scanf("%d", &new_size);

    str = (char *)realloc(str, new_size * sizeof(char));
    if (str == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("Enter additional characters to append: ");
    scanf("%s", temp);

    strcat(str, temp);

    printf("Updated string: %s\n", str);

    free(str);
    return 0;
}