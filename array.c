#include <stdio.h>
#include "array.h"
#include <math.h>

void arrayPrint(int arr[], int arrLength) { //Faz printf de todo os elementos do array
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int sum(int arr[], int arrLength){ //Retorna a soma de todos os elementos do array

    int sumTotal = 0;

    for(int i = 0; i < arrLength; i++)
    {
        sumTotal += arr[i];
    }

    return sumTotal;

}

double mean(int arr[], int arrLength){ //Retorna a média dos valores do array

    double avg = 0;
    double sumValue = 0;

    sumValue = (double)sum(arr, arrLength);

    avg = sumValue/arrLength;

    return avg;

}

double variance(int arr[], int arrLength){ //Calcula a variância (de população)

    double varianceValue = 0;
    double avgValue = mean(arr, arrLength);
    double sumValue = 0;

    for (int x_i = 0; x_i < arrLength; x_i++)
    {
        sumValue += pow((arr[x_i] - avgValue), 2);
    }

    varianceValue = sumValue/(arrLength-1);

    return varianceValue;
 
} //Complexidade Algoritmica (N)

double standardDeviation(int arr[], int arrLength){

    double deviation = variance(arr,arrLength);
    return sqrt(deviation);
}