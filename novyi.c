/* askname.c */
#include <stdio.h>
#include <string.h>

void askname(char *first, char *last) {
    printf("Введите свое имя: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* удалить новую строку в конце */
    
    printf("Теперь введите свою фамилию: ");
    gets(last, 255, stdin);
    last[strlen(last)-1] = '\0'; /* удалить новую строку в конце */
}