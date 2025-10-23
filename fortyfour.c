// Write a ‘C’ program for calculation of average of physics, chemistry, math, English.
#include<stdio.h>
int main(){
    int phy,che,math,eng,avg;
    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%d", &che);
    printf("Enter Maths marks: ");
    scanf("%d", &math);
    printf("Enter English marks: ");
    scanf("%d", &eng);

    avg = (phy+che+math+eng)/4;
    printf("Average marks is: %d", avg);

    return 0;
}