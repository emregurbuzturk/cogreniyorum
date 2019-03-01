#include <stdio.h>

int main(void)
{

	float sayi,ondalikKisim;
	int tamKisim;
	
	tamKisim = 0;
	ondalikKisim = 0.0;
	sayi = 0.0;
	
	printf("Bir reel sayi gir ");
	
	scanf("%f",&sayi);
	
	tamKisim = sayi;
	
	ondalikKisim = sayi-tamKisim;
	
	printf("Tam kisim %d, ", tamKisim);
	
	printf("Ondalik Kisim %f", ondalikKisim);
	
	return (0);

}
