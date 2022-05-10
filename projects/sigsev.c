#include <stddef.h>
#include <stdio.h>


int main(void) {
char s[] = "hat";
char c = s[10];
printf(&c);
int z = 1;
char d = c[&z];
printf("\n");
printf(&d);

}