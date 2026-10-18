unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	i;

	a = 0;
	b = 0;
	while (a < size && dest[a])
		a++;
	while (src[b])
		b++;
	if (a == size)
		return (size + b);
	i = 0;
	while (i < b && a + i < size - 1)
	{
		dest[a + i] = src[i];
		i++;
	}
	dest[a + i] = '\0';
	return (a + b);
}