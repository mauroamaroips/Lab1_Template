/**
 * @file array.c
 * @author Mauro Amaro
 * @brief Provides an implementation of input.h
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include "array.h"
#include <math.h>

void arrayPrint(int arr[], int arrLength) { 
    printf("[ ");
    for(int i=0; i<arrLength; i++) {
        printf("%d%s", arr[i], (i < arrLength - 1 ? ", " : ""));
    }
    printf("]\n");
}

int sum(int arr[], int arrLength){ 

    int sumTotal = 0;

    for(int i = 0; i < arrLength; i++)
    {
        sumTotal += arr[i];
    }

    return sumTotal;

}

double mean(int arr[], int arrLength){ 

    double avg = 0;
    double sumValue = 0;

    sumValue = (double)sum(arr, arrLength);

    avg = sumValue/arrLength;

    return avg;

}

double variance(int arr[], int arrLength){ 

    double varianceValue = 0;
    double avgValue = mean(arr, arrLength);
    double sumValue = 0;

    for (int x_i = 0; x_i < arrLength; x_i++)
    {
        sumValue += pow((arr[x_i] - avgValue), 2);
    }

    varianceValue = sumValue/(arrLength-1);

    return varianceValue;
 
} //Complexidade Algoritmica O(N)

double standardDeviation(int arr[], int arrLength){

    double deviation = variance(arr,arrLength);
    return sqrt(deviation);
}