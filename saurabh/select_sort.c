/*program for implementing selection sort in c using user defined fuctions*/

#include<stdio.h>									//function for selection sort


void selectionSort(int arr[],int n){
for(int j=0;j<n-1; j++){
	                   int min= j;
                         for(int i=j +1;i<n; i++){
	                      if(arr[i]<arr[min]){			//swapping condition
	                   	int temp = arr[min];
		                  arr[min] = arr[i];			
		                  arr[i]= temp;
                                             }
                                                }
                           }
                                     }
void arrayprint(int arr[],int n){						//function for printing an array
	for(int k =0;k<n;k++){
		printf("%d\t",arr[k]);
                           }
                                 }

int main() {									//this is our main function
	int arr[50];
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the %d element:\n",n);
	for(int j=0;j<n;j++){
	scanf("%d",&arr[j]);
}
	printf("the sorted array is:\n");
	selectionSort(arr, n);							//here we have called function for selection sort
	arrayprint(arr,n);							//here we have called function for printing an arrauy	
}
