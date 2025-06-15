#include<stdio.h>
void reverse(int a[],int start,int end)
{
 while(start<end)
{
int temp=a[start];
a[start]=a[end];
a[end]=temp;
start++;
end--;
}
}
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("\n Enter the elements of array:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int d;
    printf("\n Enter the position to shift:");
    scanf("%d",&d);
    if(d<0){
    d=(d+n)%n;
    }
     else
      d=d%n;
    reverse(a,0,d-1);
    reverse(a,d,n-1);
    reverse(a,0,n-1);
    printf ("Elements after rotating to %dth position:",d);
    for(int i=0;i<n;i++)
    {
    printf ("%d",a[i]);
    }
    
    
    return 0;
}