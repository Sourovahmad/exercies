int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && s1[a] && s1[a] == s2[a])
	{
		a++;
	}
	if (a == n)
		return (0);
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}