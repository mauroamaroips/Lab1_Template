#include <stdio.h> 
#include <stdlib.h>
#include "input.h"
#include "array.h"
#include "strings.h"

int main() {

    int arr[5] = {2,3,6,4,7};
    arrayPrint(arr, 5);

    printf("Sum: %d\n", sum(arr, 5));
    printf("Mean: %.2f\n", mean(arr, 5));
    printf("Variance: %.2f\n", variance(arr, 5));
    printf("Standard Deviation: %.2f\n", standardDeviation(arr, 5));

    char str1[] = "teste\0";
    char str2[] = "Teste\0";

    equal(str1,str2);

    char palindromeWord[] = "Sator arepo tenet opera rotas\0";

    isPalindrome(palindromeWord);
    isPalindromeAlt(palindromeWord);

    char duplicate1[] = "casa\0";
    char duplicate2[] = "terno\0";
    printf("%d\n",hasDuplicates(duplicate1));
    printf("%d\n",hasDuplicates(duplicate2));

 //Nível 4

    char const str[] = "";
    char* strPtr = (char*) str;
    printf("Introduza uma string: ");
    readString(strPtr, 100);
    letterFrequency(strPtr);

    return EXIT_SUCCESS;
}
