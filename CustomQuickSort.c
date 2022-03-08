# include<stdio.h>

// Program to perform quick sort
void display(int a[],int n);
void swap(int *a,int *b);
void quickSort(int a[],int low,int high);

int main()
{
    int a[20];
    int n;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before sorting \n");
    display(a,n);
    quickSort(a,0,n-1);
    printf("Array after sorting \n");
    display(a,n);
}

void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int a[],int low,int high)
{
    int pivot,i,j;

    if(low < high)
    {
        pivot = high;
        i = low;
        j = high;

        while(i < j)
        {

            while(a[i] <= a[pivot] && i<high)
            {
                i++;
            }

            while(a[j] > a[pivot])
            {
                j--;
            }

            if(i<j)
            {
                swap(&a[i],&a[j]);
            }
        }
        swap(&a[i],&a[pivot]);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}
