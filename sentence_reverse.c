#include <stdio.h>
#include <string.h>

int main(){
    char sentence[128], temporaryPosition;
    printf("Original Sentence = "); 
    fgets(sentence, 128, stdin);
    int position = 0;
    int lastIndex = strlen(sentence) - 1;
    while (position < lastIndex)
    {
        temporaryPosition = sentence[lastIndex];
        sentence[lastIndex] = sentence[position];
        sentence[position] = temporaryPosition;

        position++;
        lastIndex--;
    }
    
    printf("Reversed Sentence = %s", sentence);

    return 0;
}