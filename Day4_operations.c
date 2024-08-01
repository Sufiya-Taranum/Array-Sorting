#include "Day4_header.h"
#include <stdio.h>

void sort_asscending_order(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               swap_array(&a[i],&a[j]);
            }
        }
    }
    printf("\n Array after sorting in ascending order\n");
    print_array(a,n);
}
void sort_descending_order(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
               swap_array(&a[i],&a[j]);
            }
        }
    }
    printf("\n Array after sorting in descending order\n");
    print_array(a,n);

}
void print_array(int a[] ,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void swap_array(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
