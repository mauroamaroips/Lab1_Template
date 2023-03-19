/**
 * @file array.h
 * @author Mauro Amaro
 * @brief Provides simple functions to calculate sum, mean, variance, etc
 * @version 0.1
 * @date 2023-03-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#pragma once

/**
 * @brief Prints all elements of an integer array
 * 
 * @param arr An integer array
 * @param arrLength The length of the integer array
 */
void arrayPrint(int arr[], int arrLength);

/**
 * @brief 
 * 
 * @param arr An integer array
 * @param arrLength The length of the integer array
 * @return int Returns an integer value
 */
int sum(int arr[], int arrLength);

/**
 * @brief 
 * 
 * @param arr An integer array
 * @param arrLength The length of the integer array
 * @return double Returns a double value
 */
double mean(int arr[], int arrLength);

/**
 * @brief 
 * 
 * @param arr An integer array
 * @param arrLength The length of the integer array
 * @return double Returns a double value
 */
double variance(int arr[], int arrLength);

/**
 * @brief 
 * 
 * @param arr An integer array
 * @param arrLength The length of the integer array
 * @return double Returns a double value
 */
double standardDeviation(int arr[], int arrLength);