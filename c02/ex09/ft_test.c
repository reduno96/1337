#include <unistd.h>
char *lower_case(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
	return (str);
}

char *test(char *str)
{
    int i = 0;
    lower_case(str);

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] =str[i] - 32;
    }
    
    while (str[i])
    {
        if (!(str[i] >= 'a' && str[i] <= 'z') 
        && !(str[i] >= 'A' && str[i] <= 'Z') 
        && !(str[i]>= '0' && str[i] <= '9') )
        {
            if (str[i +1]>= 'a' && str[i + 1] <= 'z')
                str[i + 1] = str[i + 1] - 32;
        }
        i++;
    }
	return(str);
}

void put_char(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i = 0;

    while (str[i])
    {
        put_char(str[i]);
        i++;
    }
}
int main ()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    test(str);
    ft_putstr(str);

	return 0;

}
