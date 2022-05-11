#include <stddef.h>
#include <stdio.h>


int main(void) {
printf("START\n");
int i;
for (i = 0; i < i+10; i++) {
    printf("Run number: ");
    printf("%d", i);
    printf("\n");
    char s[] = "hat";
    char *c = s[i];
    printf("%c", c);
    printf("\n");
}
printf("END");
}