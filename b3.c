#include <stdio.h>
#include <ctype.h>

void spacedUppercase(const char *sentence) {
    while (*sentence) {
        
        printf("%c ", toupper(*sentence));
        sentence++;
    }
    printf("\n");
}

int main() {
    char sentence[100];
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("Output: ");
    spacedUppercase(sentence);
    
    return 0;
}