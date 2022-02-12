#include<stdio.h>
int main()
{
	float radius,diameter,circumference,area;
	printf("enter radius of cirle\n",radius);
	scanf("%f",&radius);
	diameter=2*radius;
	printf("diameter=%f\n",diameter);
	circumference=2*3.14*radius;
	printf("circumference=%f\n",circumference);
	area=3.14*radius*radius;
	printf("area=%f",area);
	return 0;	
}