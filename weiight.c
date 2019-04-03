#include<stdio.h> 
#define MAX 30

 int subArraySum(int arr[], int n, int sum)
 { 
int curr_sum, i, j,value;
 
 for (i = 0; i < n; i++) 
{
 curr_sum = arr[i];
 
 for (j = i+1; j <= n; j++) 
{
 if (curr_sum == sum)
 {
 
value=((j-1)-i)+1; 
printf("%d",value); 
return 1; 
} 
if (curr_sum > sum || j == n)
 break; 
curr_sum = curr_sum + arr[j]; 
} 
} 
printf("No subarray found");
 return 0;
 } 


int main()
 {
 int arr[MAX],sum; 
int no,i;
 printf("\nNO.of value to be in the array:"); 
scanf("%d",&no);
 printf("\nEnter the value in the array:");
 for(i=0;i<no;i++) 
{
 scanf("%d",&arr[i]);
 } 
int n = sizeof(arr)/sizeof(arr[0]); 

printf("\nEnter the value to be found value of:");
scanf("%d",&sum);
subArraySum(arr,n,sum);
return 0;
}
