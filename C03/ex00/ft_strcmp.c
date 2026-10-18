int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s1[a] == s2[a])
	{
		a++;
	}
	return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}