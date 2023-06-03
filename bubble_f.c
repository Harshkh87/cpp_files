#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];
    int i,n,temp,j;
    printf("enter the size of array");
    scanf("%d",&n);

    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("before the sorting");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);

    printf("\nafter the sorting");

    for(j=0;j<n-1;j++)
    {
       for(i=0;i<n-j-1;i++)
        {
           if(a[i]>a[i+1])
           {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
           }
        }
    }
          for(i=0;i<n;i++)
       printf("\n%d",a[i]);
    getch();
}
