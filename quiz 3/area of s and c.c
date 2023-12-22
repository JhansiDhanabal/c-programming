#include<stdio.h>
#include<math.h>
int main()
{
    char shape;
    int size;
    float area;
    printf("Enter Shape = ");
    scanf("%c",&shape);
    printf("Enter Size = ");
    scanf("%d",&size);
    switch(shape){
        case 'S':
            area = size*size;
            printf("Area of Square = %.0f",area);
            break;
        case 'C':
            area = 3.14 * size * size;
            printf("Area of Circle = %.2f",area);
            break;
    }
    return 0;
}
