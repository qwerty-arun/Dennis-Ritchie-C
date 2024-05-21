#include <stdio.h>
int main()
{
	int c; 
  /*there is a reason why why we are using int, we must declare c to be big enough to hold any value that getchar returns, 
  big enough to hold EOF in addition to any possiblle char.*/
	c=getchar();
	while(c!=EOF){
	putchar(c);
	c=getchar();
	}
}
