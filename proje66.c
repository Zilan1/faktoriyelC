#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sayi;
	
	printf("Faktoriyeli Alinacak Sayi Giriniz");
	scanf("%d",&sayi);
	int faktoriyel=1;
	int i=1;
	
	while(i<=sayi)
	{
		faktoriyel=faktoriyel*i;
		i++;
	}
	
	printf("\nSonuc: %d",faktoriyel);	
	
	return 0;
}
