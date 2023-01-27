//Swaping using Pointers
#include<stdio.h>
void swap(int *a, int *b);
int main()
{ int a,b;
  printf("Enter Value A: ");
  scanf("%d",&a);
  printf("Enter Value B: ");
  scanf("%d",&b);
  swap(&a,&b);
  printf("A=%d \n B=%d\n ",a,b);
    return 0;
}


//functions
void swap(int *a,int *b)
{int temp=0;
 temp =*a;
 *a=*b;
 *b=temp;
}