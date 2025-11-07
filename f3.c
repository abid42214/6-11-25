#include<stdio.h>
int main(){
int array []={1,2,3,5,8,13,21,34,55};
int key,i,n;
n=9;

printf("enter a key :");
scanf("%d",&key);


for(i=0;i<n;i+=1)
{
    if(array[i]==key)
       {

        printf("%d is found in the arry \n",key);
    break;
       }
}


if(i==n)
{
    printf("%d is not found in the arry \n",key);
}


return 0;}
