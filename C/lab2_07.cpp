#include<stdio.h>
 int main()
{
	double d,a, b1,b2;

	printf("nhap duong kinh hinh tron là:    ");
	scanf("%lf",&d);
    
    printf("nhap do dai canh hinh vuong là:   ");
    scanf("%lf",&a);

    printf("nhap do dai canh thu 1 la:   ");
    scanf("%lf",&b1);

    printf("nhap do dai canh thu 2 la:   ");
    scanf("%lf",&b2);

    printf("\nchu vi hinh tron co duong kinh la %lf va %lf",d,d*3.14);
    printf("\ndien tich hinh tron co duong kinh la %lf va %lf",d,d*d*3.14/4);

    printf("\nchu vi hinh vuong co canh la %lf va %lf",a,a*4);
    printf("\ndien tich hinh vuong co canh la %lf va%lf",a, a*a);

    printf("\nchu vi hinh chu nhat co 2 canh la %lf va %lf:%lf",b1,b2,(b1+b2)*2);
    printf("\ndien tich hinh chu nhat co 2 canh la %lf va %lf:%lf",b1,b2,b1*b2);
return 0;

}
