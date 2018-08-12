#include<iostream>
#include"CDungChung.h"
int TimUCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0)
		return a + b;
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}