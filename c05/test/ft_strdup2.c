

char *ft_strdup(char *src) {
	
	int a = 0; 

	while (src[a])
	a++;


	char b = malloc(a); 
	a = 0;
	
	while (src[a]){
		b[a] =  src[a];i
		a++;
	}	
	
	b[a] = '\0';

	return b;

}



