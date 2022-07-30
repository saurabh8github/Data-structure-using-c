#include<stdio.h>
void bubbleSort(int arr[],int n){
for(int i =0;i<n-1;i++){
     if(arr[i]>arr[i+1]){
       int temp = arr[i];
	 arr[i] = arr[i+1];
	arr[i+1] = temp;
}
}
}
void arrayprint(int arr[],int n){
	for(int i =0;i<n;i++){
		printf("%d\t",arr[i]);
}
}
int main() {
	int arr[50];
	int n;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the %d element:\n",n);
	for(int j=0;j<n;j++){
	scanf("%d",&arr[j]);
}
	printf("the sorted array is:\n");
	for(int k=0;k<n;k++){
	bubbleSort(arr, n);
}
	arrayprint(arr,n);
}