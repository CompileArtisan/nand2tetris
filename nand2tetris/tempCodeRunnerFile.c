#include <stdio.h>

void rdar(int a[20], int n)
{
    printf("Enter the elements of your array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void pntar(int a[20], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void rvar(int a[20], int n)
{
    for(int i=n-1; i>=0; i--)
        printf("%d ", a[i]);
    printf("\n");
}

void mrgar(int a[20], int b[20], int m, int n)
{
    int s = m + n;
    int c[s], i, j;
    for(int i=0; i<m ; i++) c[i]=a[i];
    for(int i=0; i<n ; i++) c[m+i]=b[i];

    printf("Array elements after merging: \n");
    for (int k=0; k<s; k++) {
        printf("%d ", c[k]);
    }
    printf("\n");
}

void bblsrt(int a[20], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Array elements after bubble sort: ");
    pntar(a,n);
}

void slnsrt(int a[20], int n)
{
    int t;
    for(int i=0; i<n-1; i++)
    {
        int min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    printf("Array elements after selection sort: ");
    pntar(a,n);
}

void inssrt(int a[20], int n)
{
    int key, j;
    for(int i=1; i<n; i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    printf("Array elements after insertion sort: ");
    pntar(a,n);
}

int linsrch(int a[20], int n, int key)
{
    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int binsearch(int a[20], int n, int key)
{
    int b=0, e=n-1, m, loc=-1;
    while(b<=e)
    {
        m=(b+e)/2;
        if(a[m]==key)
        {
            loc=m;
            break;
        }
        else if(a[m]<key)
            b=m+1;
        else
            e=m-1;
    }
    return loc;
}

int delar(int a[20], int loc, int n)
{
    printf("Enter the index of the element to be deleted: ");
    scanf("%d", &loc);
    if(loc<n)
    {
        printf("The element to be deleted is %d\n",a[loc]);
        for(int i=loc; i<n-1; i++)
        {
            a[i]=a[i+1];
        }
        n--;
    }
    else
        printf("Invalid index\n");
    printf("Array elements after deletion: ");
    pntar(a,n);
    return n;
}

int instar(int a[20], int n, int ele, int loc)
{
    printf("Enter the index of the element to be inserted: ");
    scanf("%d", &loc);
    printf("Enter the element to be inserted: ");
    scanf("%d", &ele);
    if(loc<n)
    {
        for(int i=n-1; i>=loc; i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=ele;
        n++;
    }
    else
        printf("Invalid index\n");
    printf("Array elements after insertion: ");
    pntar(a,n);
    return n;
}

int main()
{
    int choice, n, m, key, loc, ele;
    int a[20], b[20];

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    rdar(a, n);

    do {
        printf("\nMenu:\n");
        printf("1. Print the array\n");
        printf("2. Reverse the array\n");
        printf("3. Merge two arrays\n");
        printf("4. Sort the array using Bubble Sort\n");
        printf("5. Sort the array using Selection Sort\n");
        printf("6. Sort the array using Insertion Sort\n");
        printf("7. Linear Search\n");
        printf("8. Binary Search\n");
        printf("9. Delete an element\n");
        printf("10. Insert an element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Array elements: ");
                pntar(a, n);
                break;
            case 2:
                printf("Reversed array elements: ");
                rvar(a, n);
                break;
            case 3:
                printf("Enter the size of the second array: ");
                scanf("%d", &m);
                printf("Enter the elements of the second array:\n");
                rdar(b, m);
                mrgar(a, b, n, m);
                break;
            case 4:
                bblsrt(a, n);
                break;
            case 5:
                slnsrt(a, n);
                break;
            case 6:
                inssrt(a, n);
                break;
            case 7:
                loc = linsrch(a, n, key);
                if(loc != -1)
                    printf("Element found at index %d\n", loc);
                else
                    printf("Element not found\n");
                break;
            case 8:
                printf("Enter the element to be searched: ");
                scanf("%d", &key);
                loc = binsearch(a, n, key);
                if(loc != -1)
                    printf("Element found at index %d\n", loc);
                else
                    printf("Element not found\n");
                break;
            case 9:
                n = delar(a, loc, n);
                break;
            case 10:
                n = instar(a, n, ele, loc);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 0);

    return 0;
}
