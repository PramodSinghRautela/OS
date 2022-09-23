//Zombie problem
#include<stdio.h>
#include<unistd.h>

int main(){
          int n;
          printf("Enter the size of array\n");
          scanf("%d",&n);
         
          int arr[n];
          printf("Enter the elements in the array\n");
          for(int i=0;i<n;i++){
               scanf("%d",&arr[i]);
          }
          
          int pid=fork();
          int evenSum=0;
          int oddSum=0;

          
          if(pid==0){
              for(int i=0;i<n;i++){ 
                     if(arr[i]%2==0){
                         evenSum += arr[i];
                     }
          }
          printf("\nEven sum is %d \nP_Id is %d\n",evenSum,pid);
          printf("Parent ID is %d\n",getppid());
          }
          else{
               sleep(5);
               for(int i=0;i<n;i++){
                    if(arr[i]%2 !=0){
                         oddSum += arr[i];
                    }
               }
               printf("Odd sum is %d \nP_Id is %d\n",oddSum,pid);
     
          }
          
}
