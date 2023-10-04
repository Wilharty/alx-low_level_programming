/**
 * swap_int - swaps the values of 2 int
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	
	*a = *b;
	*b = i;
}
