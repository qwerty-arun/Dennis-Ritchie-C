# include <stdio.h>
int main()
{
	float fahr,celcius,upper,lower,step;
	lower=-100.0;
	upper=200.0;
	step=30.0;
	celcius=lower;
	while(celcius<=upper)
	{
		fahr=(9.0/5.0)*celcius+32.0;
		printf("%3.0f\t%6.1f\n",celcius,fahr);
		celcius=celcius+step;
	}
}
