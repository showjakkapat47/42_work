char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(src[i])
	{
		desti[i] = src[i];
		i++;
	}
	return(dest);
}
