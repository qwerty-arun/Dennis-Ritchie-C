# include <stdio.h>
// fa vhralues are 0,20,40 ..300
int main()
{
	float fahr,celcius,upper,lower,step;
	lower=0.0;
	upper=300.0;
	step=20.0;
	fahr=lower;
	while(fahr<=upper)
	{
		celcius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f\t%6.1f\n",fahr,celcius);
		fahr=fahr+step;
	}
}
