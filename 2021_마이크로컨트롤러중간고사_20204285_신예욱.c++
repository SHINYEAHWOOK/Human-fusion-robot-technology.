#include <iostream>
#include <math.h>
using namespace std;
 
#define SIZE 5    
static double average, deviation;    
 
void insert_arr(double* a, int size);    
void average_arr(double* a, int size);    
void deviation_arr(double* a, int size);    
 
int main() {
    double arr[SIZE] = {0};    
 
    insert_arr(arr, SIZE);
    average_arr(arr, SIZE);
    deviation_arr(arr, SIZE);
 
    return 0;
}
 
void insert_arr(double* a, int size) {
    int i;
 
    for(i=0; i<size; i++) {        
        printf("Enter the data: ");
        scanf("%lf", &a[i]);    
    }
}
void average_arr(double* a, int size) {
    int i;
    double sum=0;
 
    for(i=0; i<size;  i++)
        sum += a[i];        
 
    average = sum / size;
    printf("The average value is %f \n", average);
}
void deviation_arr(double* a, int size) {
    int i;
    double sum=0;
 
    for(i=0; i<size; i++)    
        sum += (a[i] - average) * (a[i] - average);
    deviation = sqrt(sum / size);    
 
    printf("The standard deviation value is %f \n", deviation);
}
