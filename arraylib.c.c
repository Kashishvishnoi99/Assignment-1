#include<stdio.h>
#include "arraylib.h.h"

void DisplayArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%d\n", arr[i]);
	}
}

int FindMaxIndex(int arr[],int size){
	printf("LAST INDEX VALUE %d\n", arr[size-1]);
}
int FindMinIndex(int arr[], int size){
	printf("MIN INDEX VALUE%d\n", arr[0]);
}

float FindAverage(int arr[], int size){
	float sum=0;
	int i;
	for(i=0;i<size;i++){
		sum= sum +arr[i];
	}
	printf("AVERAGE is %2f\n", sum/size);
}

void ReverseArray(int arr[], int size){
	
	int b;
	for(int i = 0;i<size/2;i++){
	   b=arr[i];
	   arr[i]=arr[size-i-1];
	   arr[size-i-1]=b;	
	}
	printf("ARRAY REVERSE\n");
}


void SortArray(int arr[], int size){
	for(int i = 0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if (arr[j]>arr[j+1]){
				int t = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("Araay is in ASCENDING ORDER.\n");
}


void LinearSearch(int arr[], int size,int value){
	for(int i=0;i<size;i++){
		if(arr[i] == value){
			printf("Value found  %d \n", value,i);
			return i;
		}
		printf("Value not found in array %d\n", value);
	    return -1;
	}
}




