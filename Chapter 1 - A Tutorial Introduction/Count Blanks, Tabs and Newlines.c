#include <stdio.h>
int main()
{
	int spaces=0, tabs=0, newlines=0;
	int c;
	while((c=getchar())!=EOF)
	{
	if(c=='\n')
		++newlines;
	if(c=='\t')
		++tabs;
	if(c==' ')
		++spaces;
	}
	printf("No of blanks: %d\n",spaces);
	printf("No of tabs: %d\n",tabs);
	printf("No of newlines: %d\n",newlines);
}
