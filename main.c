
#include <stdio.h>
#include "statistics.h"

int main(){
    float arr1[]={5,3.56,8,7,12,3,5.87,6,9};
    float arr2[]={4,7,8,3,8};
    float arr3[]={2,9,7,4,7};
    //array sizes declared
    int size1=9;
    int size2=5;
    int size3=5;

    //average values passed
    float avg1=average(arr1, size1);
    float avg2=average(arr2, size2);
    float avg3=average(arr3, size3);

    //standard deviation passed
    float standarddev1=std(arr1, size1);
    float standarddev2=std(arr2, size2); 
    float standarddev3=std(arr3, size3);	    
	    
    //sum of array passed	    
    float sumOfAll1=sum(arr1, size1);
    float sumOfAll2=sum(arr2, size2);
    float sumOfAll3=sum(arr3, size3);
    // minimum value of arr passed
    float min1=minimum(arr1, size1);
    float min2=minimum(arr2, size2);
    float min3=minimum(arr3, size3);

    //maximum vlaue of arr passed
    float max1=maximum(arr1, size1);
    float max2=maximum(arr2, size2);
    float max3=maximum(arr3, size3);

    //difference of max and min
    float absoluteDifference1=absdiff(max1, min1);
    float absoluteDifference2=absdiff(max2, min2);
    float absoluteDifference3=absdiff(max3, min3);

    //print arr 1 average 1 std 1 sum 1 max 1 min 1 absdiff 1
    printf("The average is: %.2f.\n The Standard Deviation is: %.2f.\n The sum is: %.2f.\n The max is: %.2f.\n The min is:%.2f.\n The absdiff is: %.2f.\n",avg1, standarddev1, sumOfAll1, max1, min1, absoluteDifference1);
    //print arr 2 average 2 std 2 sum 2 max 2 min 2 absdiff 2
    printf("The average is: %.2f.\n The Standard Deviation is: %.2f.\n The sum is: %.2f.\n The max is: %.2f.\n The min is: %.2f.\n The absdiff is: %.2f.\n",avg2, standarddev2, sumOfAll2,max2, min2,absoluteDifference2);
    //print arr 3 average 3 std 3 sum 3 max 3 min 3 absdiff 3
    printf("The average is: %.2f.\n The Standard Deviation is: %.2f.\n The sum is: %.2f.\n The max is: %.2f.\n The min is: %.2f.\n The absdiff is: %.2f.\n",avg3, standarddev3, sumOfAll3,max3, min3, absoluteDifference3);
    return 0;

}
