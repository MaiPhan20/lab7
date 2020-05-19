#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main ()
{
   int soThe,matKhau,soDuTaiKhoan;
    soDuTaiKhoan = 5000000;
   char tieptuc[10];
   int luaChon;
   int cashout;
   printf("\nnhap So the : ");
   scanf("%d", &soThe);
   printf("\nV nhap mat khau : ");
   scanf("%d", &matKhau);
   if(soThe == 10000 && matKhau == 5555)
   {
     printf("\nok ");
     do{
        
        printf("Nhap so de lua chon \n");
       printf("1. Rut tien \n2.Kiem tra so du \n");
       scanf("%d", &luaChon);
       
       switch(luaChon)
       {
           case 1:
            printf("\nNhap so tien muon rut ra :");
            scanf("%d", &cashout);
            if(soDuTaiKhoan >= cashout)
            {
            soDuTaiKhoan -= cashout;
            printf("Ban da rut thanh cong %d \n So du con lai la : %d", cashout,soDuTaiKhoan);
            }
            else
            {
            printf("Tai khoan cua ban khong du de rut");    
            }
            break;
           case 2:
            printf("So du cua ban hien tai la : %d", soDuTaiKhoan);
            break;
       }
        printf("\nBan co muon tiep tuc khong (y\n) ? \n");
        scanf("%s", &tieptuc);
       }
       while(tieptuc != 'n');
       {
           printf("\nXin chao va hen gap lai");
       }
   }
   

   return 0;
}

