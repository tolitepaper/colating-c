#include <stdio.h>
#include <string.h>
struct CityTemp
{
	char name[20];
	float chun;
	float xia;
	float qiu;
	float dong;
	float average;
};

int main(void) 
{
	struct CityTemp CT;
	strcpy(CT.name, "beijing");
	CT.chun = 36;
	CT.xia = 36;
	CT.qiu = 36;
	CT.dong = 36;
	CT.average = (CT.chun + CT.xia + CT.qiu + CT.dong) / 4;
	printf("%s %f", CT.name, CT.average);


	return 0;
}
