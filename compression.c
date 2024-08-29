#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("enter astring \n");
    scanf("%s",&str);
    int i, count, len = strlen(str);

    for (i = 0; i < len; i++) {
        count = 1;
        while(i+1 < len && str[i] == str[i+1])
        { 
            count ++;
            i++;
        }
        printf("%c%d", str[i], count);
    }
}
