#include<stdio.h>
#include<stdlib.h>
struct area
{
    int r;
};


void readpoint(struct area *a1)
{

    scanf("%d",&a1->r);
}
void findarea(const struct area *a1)
{
    float A;
    A= 3.142*(a1->r)*(a1->r);
    printf("Area of the circle is %0.2f",A);

}
int main()
{

    struct area a;
    printf("Enter the radius of the circle\n");
    readpoint(&a);
    findarea(&a);
return 0;
}
