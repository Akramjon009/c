#include <stdio.h>
#include <string.h>

void print_reverse(char text[]){
    for(int i = strlen(text) - 1; i >= 0; i--){
        printf("%c", text[i]);
        text[i] = 127;

    }
        printf(" ");
}

void output(char text[], char text1[]){
    for(int i = 0, j = 0; text[i] != '\0'; i++, j++){
        if(text[i] == ' '){
            print_reverse(text1);
            j = 0;
        }
        else if(text[i] == '\n'){
            print_reverse(text1);
            j = 0;
        }
        else{
            text1[j] = text[i];
        }
    }
}

int main(){

    char text[100];
    char text1[100];
    printf("Textni kiriting: ");    scanf("%[^\n]s ", text);
    text[strlen(text)] = ' ';
    output(text, text1);
    return 0;

}
