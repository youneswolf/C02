#include<stdio.h>
char	*ft_strcapitalize(char *str){
	int		i;
	int		next;
	char	c;

	i = 0;
	next = 1;
	while (*(str + i) != '\0')
	{
		if (next == 1 && c >= 'a' && c <= 'z')
			str[i] -=32;
		else if (next == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
			c = *(str + i);
			
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			next = 1;else
			next = 0;
		i++;
	}
	return (str);
}
int main(){
    char r[]="salut, comment tu vas";
    printf("%s",ft_strcapitalize(r));
    return 0;
}
