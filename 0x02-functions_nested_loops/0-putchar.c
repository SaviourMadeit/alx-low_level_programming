int main(void)
{
	char *c = "_putchar";
	char c[] = "_putchar";
	int i = 0;

	for (i = 0; i < 10; i++)
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
