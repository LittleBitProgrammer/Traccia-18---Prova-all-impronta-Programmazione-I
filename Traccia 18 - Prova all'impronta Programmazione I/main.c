//
//  main.c
//  Traccia 18 - Prova all'impronta Programmazione I
//
//  Created by Roberto Vecchio on 19/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char lettersOccurence(char *, unsigned long);

int main(int argc, const char * argv[]) {
    
    char phrase[100];
    printf("insert phrase: ");
    fgets(phrase, 4096, stdin);
    
    char letter = lettersOccurence(phrase, strlen(phrase));
    
    printf("più frequente = %c\n\n", letter);
    
    return 0;
}

char lettersOccurence(char *phrase, unsigned long size){
    int i;
    int count[26] = {0};
    int maxLetter = 0;
    char letter = ' ';
    
    for (i = 0; i < size; i++) {
        count[phrase[i] - 'a']++;
    }
    
    for (i = 0; i < 26; i++){
        if (count[i] > maxLetter) {
            maxLetter = count[i];
            letter = 'a' + i;
        }
    }
    
    return letter;
    
}
