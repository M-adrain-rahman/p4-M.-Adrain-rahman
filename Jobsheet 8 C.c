#include<stdio.h>
int main()
{
printf("Nama : M.Adrain rahman \n");
printf("NIM : F1B019084 \n");
printf("Kelompok : 18 \n\n");
		
int x[4],i;
for (i=0; i<=5; i++)
{
printf("Masukkan nilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for (i=0; i<=5; i++)
{
printf("Nilai ke-%i = %i \n",i+1,x[i]);
}
printf("\n");
return 0;
}
