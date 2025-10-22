#include <stdio.h>
#include "arraylib.h.h"

int main(void){
	int a[]={3,1,4,5};
	int n=4;
	DisplayArray(a,n);
	FindMaxIndex(a,n);
	FindMixIndex(a,n);
	FindAverage(a,n);
	ReverseArray(a,n);
	DisplayArray(a,n);
	SortArray(a,n);
	DisplayArray(a,n);
	LinearSearch(a,n,3);
	LinearSearch(a,n,10);
	
	return 0;
}

