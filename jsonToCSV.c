#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>

// ------------------------------------------------------------------------ //

int main(){

    FILE *fptr;
    fptr = fopen("test.json", "r");

    char str[300];

    while (fgets(str, 300, fptr)){
        printf("%s", str);
    }

    fclose;

    return 0;

}
