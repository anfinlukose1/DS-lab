#include<stdio.h>
#include<stdlib.h>

void insert();
void delete();
void search();
void sort();
void display();

int array[100];
int num;
int n;

int main()
{
    printf("Enter the numbers of elements: ");
    scanf("%d", &num);
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("The array elements are:\n");
    for(int i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    while(1)
    {
        printf("Enter option:\n1.insert\n2.delete\n3.search\n4.sort\n5.display\n6.exit\n");
        scanf("%d", &n);
        switch(n)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;   
            case 3:
                search();
                break;
            case 4:
                sort();
                break; 
            case 5:
                display();
                break;
            case 6:
                exit(0);
                break;           
            default:
                printf("Invalid option \n");
                break;      
        }
    }
    return 0;
}

void insert()
{ 
    int numbers;
    printf("Enter the number to be inserted: ");
    scanf("%d", &numbers);
    array[num] = numbers;
    num = num + 1;
    printf("The array elements are:\n");
    for(int i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);  
    }
}

void delete()
{
    int i, ind, j;
    if(num != 0)   
    {
        printf("\nEnter the index of the element to delete: ");
        scanf("%d", &ind);
        if(ind >= 0 && ind < num)  
        {
            for(j = ind; j < num - 1; j++)
            {
                array[j] = array[j + 1];  
            }
            num = num - 1;
        }
        else
        {
            printf("Invalid index\n");
        }
    }
    else 
    { 
        printf("\nArray is empty\n");
    }
    printf("The array elements are:\n");
    for(i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
}

void search()
{
    int tosearch, found, i;
    printf("\nEnter element to search: ");
    scanf("%d", &tosearch);
    found = 0;
    for(i = 0; i < num; i++)
    {
        if(array[i] == tosearch)
        {
            found = 1;
            break; 
        }
    }
    if(found == 1)  
    {
        printf("\n%d is found at the position %d\n", tosearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array\n", tosearch);
    } 
}

void sort()
{
    int i, a, j;
    for(i = 0; i < num - 1; ++i)  
    {
        for(j = i + 1; j < num; ++j)
        {
            if(array[i] > array[j])
            {
                a = array[i];
                array[i] = array[j];
                array[j] = a;
            }
        }
    }
    printf("The numbers arranged in ascending order are given below:\n");
    for(i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);  
    }
} 

void display()
{
    int i;
    printf("The array elements are:\n");  
    for(i = 0; i < num; i++)   
    {
        printf("%d\n", array[i]);
    }
}

