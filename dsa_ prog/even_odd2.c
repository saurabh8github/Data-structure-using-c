#include<stdio.h>
int main(){
           int arr[500],n;
            printf("enter a number :");
           scanf("%d",&n);
           printf("enter a number :");
         for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
          
                  for(int i=0;i<n;i++){
                      if(arr[i]%2==0)
                      printf("%d is even number\n",arr[i]);
                      else
                        printf("%d is odd number\n",arr[i]);
                      
                     
                 }
           return 0;
}
