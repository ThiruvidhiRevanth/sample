#include<stdio.h>
int main()
{
char h,l,g;
int a;
printf("enter health e for excellent and p for poor");
scanf("%c,",&h);
printf("enter location c for city and v for village");
scanf("\n %c,",&l);
printf("enter gender m for male and f for female");
scanf("\n %c",&g);
printf("enter age between 25 and 35");
scanf("\n %d",&a);
if((h=='e')&&(l=='c')&&(g=='m')&&(a>=25||a<=35))
printf("\n the pre,ium is rs.4 per thousand and his policy cannot exceed rs.2lakhs");
else if((h=='e')&&(l=='c')&&(g=='f')&&(a>=25||a<=35))
printf("\n the premium is rs.3 per thousand and her policy cannot exceed rs.1lakhs");
else if((h=='p')&&(l=='v')&&(g=='m')&&(a>=25||a<=35))
printf("\n the premium is rs.6 per thousand and her policy cannot exceed rs.10000");
else
printf("\n not insured");
return 0;
}
