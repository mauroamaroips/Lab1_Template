#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "strings.h"
#include "input.h"

bool equal(const char str1[], const char str2[]) { //checks if two strings are equal
    if(strlen(str1) != strlen(str2)) {
        printf("As strings têm tamanhos diferentes.\n");
        return false;
    } else {
        for(int i = 0; i < strlen(str1); i++) {
            if(toupper(str1[i]) != toupper(str2[i]) || tolower(str1[i]) != tolower(str2[i])) {
                printf("As strings são diferentes!\n");
                return false;
            }
        }
        printf("As strings são iguais (sem diferenciar maiúsculas e minúsculas)!\n");
        return true;
    }
}

bool isPalindrome(const char str[]){ //checks if a string is a palindrome word

    int s = 0;
    int e = strlen(str) - 1;

    while (e > s)
    {
        if(str[s++] != str[e--]){
            printf("%s is not a palindrome\n", str);
            return false;
        }
    }

    printf("%s is a palindrome\n", str);
    return true;

}

bool isPalindromeAlt(const char str[]){ // checks if a sttring is a palindrome word (taking in count lower/upper letters)

    int s = 0;
    int e = strlen(str) - 1;

    while (e > s)
    {
        if(toupper(str[s++]) != toupper(str[e--])){
            printf("%s is not a palindrome\n", str);
            return false;
        }
    }

    printf("%s is a palindrome\n", str);
    return true;

}

bool hasDuplicates(const char str[]) {

    int seen[256] = { 0 }; // Initialize an array to keep track of seen characters
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {

        char c = str[i];
        
        if (c == ' ') {
            continue; // ignore spaces
        }

        c = toupper(c); // ignore case

        if (seen[(int)c] != 0) {

            return true; // duplicate character found
        }

        seen[(int)c] = 1; // mark character as seen
    }
    
    return false; // no duplicate characters found
}

//Nível 4

void letterFrequency(const char str[]){

    int alphaCounter[26] = {0};
    int strLength = strlen(str);

    for(int i = 0; i < strLength; i++){
        char c = tolower(str[i]); //Converte em lowercase
        if(isalpha(c)){ //Verifica se o caracter é uma letra
            int index = c - 'a'; //Mapeia os caractéres (a=0, b=1)
            alphaCounter[index]++;
        }
    }

    // Print the frequency table
    printf("Letra\t| Freq.\n");
    for (int i = 0; i < 26; i++) {
        char letter = 'a' + i;
        printf("%c\t| %d\n", letter, alphaCounter[i]);
    }
}