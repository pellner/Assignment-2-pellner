#include <math.h>
#include "statistics.h"


float average(float arr[], int size){
    float num=0;
    for(int i=0; i<size; i++){
        num=num + arr[i];

    }
    float average= num/size;
    return average;
}
float std(float arr[],int size){

    //find average
    float stdavg=average(arr, size);

    float sumSquaredDiff=0.0;

    for(int i=0; i<size; i++){
        float farDistance=0.0;
        //find how far each number is from the average
        farDistance= stdavg - arr[i];
        //squared number
        float squared=farDistance * farDistance;
        //add all those squared differences
        sumSquaredDiff=sumSquaredDiff+ squared;

    }
    // divide by the number of values
    float divisionStd= sumSquaredDiff/size;

    // take the sqrt

    float standardDeviation=sqrt(divisionStd);
    return standardDeviation;

}

float sum(float arr[], int size){
    float numSum=0;
    for(int i=0; i<size; i++){
        numSum=numSum + arr[i];
    }
    return numSum;
}

float maximum(float arr[], int size){
    float max=arr[0];
    for(int i=1;i<size; i++){
        if(arr[i]>max){
            max=arr[i];
	}
	else{
            continue;
	}
    }
    return max;
}

float minimum(float arr[], int size){
    float min=arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
	}
	else{
            continue;
	}
    }
    return min;
}

float absdiff(float max, float min){
    float difference=0;
    difference=max-min;
    return difference;
}	



