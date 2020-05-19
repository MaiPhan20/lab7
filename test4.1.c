#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main ()
{
   int y,menu,price,soLuong,tongTien;
   do
   {
       printf("menu \n");
       printf("tra chanh 1 gia 100k \n kem 2 gia 200k \n");
       scanf("%d", &menu);
       
       switch(menu)
       {
           case 1:
            printf("Ban da order thanh cong tra chanh");
            price += 100000;
            break;
           case 2:
            printf("Ban da order thanh cong kem");
            price += 200000;
            break;
       }
       printf("\Tiep tuc hay dung lai : \n");
       scanf("%d", &y);     
   }
   while(y != 0);
   printf("\nNhap so luong : ");
   scanf("%d",&soLuong);
   tongTien=price*soLuong;
   printf("\nSo tien can thanh toan la : %d VND", tongTien);

   printf("\nGood Bye. See you again !\n");

   return 0;
}

