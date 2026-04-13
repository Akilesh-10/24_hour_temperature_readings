/**
 *  Store 24-hour temperature data in 2D array.
temperature[7][24]
 */

 #include<stdio.h>
 #include "stdint.h"

 int main(){
    const uint32_t week = 7;
    const uint32_t hours = 24;

    float temp_read[week][hours];
    for(uint32_t i = 0;i < week;i++){
        printf("\nEnter the reading for day %d : ",i+1);
        for(uint32_t j = 0;j < hours;j++){
            printf("\nEnter the temperature reading for hour %d: ",j+1);
            scanf("%f",&temp_read[i][j]);
        }
    }

    for(uint32_t i = 0; i < week; i++){
        printf("\nReading of day %d ",i+1);
        for(uint32_t j = 0; j < hours; j++){
            printf("\nTemperature reading of hour %d",j+1);
            printf("\n%.2f",temp_read[i][j]);
        }
    }

 }