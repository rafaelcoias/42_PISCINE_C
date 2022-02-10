/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rade-sar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 13:05:56 by rade-sar          #+#    #+#             */
/*   Updated: 2021/09/17 14:45:34 by rade-sar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);

int	main(void)
{
	//ex00
	
	char source[] = "Source string.";
	char destin[] = "Destination string.";
	char *dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);
    dest = ft_strcpy(destin, source);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, dest);
	printf("\n");

	//ex01
	
	char src[] = "Source string.";
	char dest1[] = "Destination string.";
	unsigned int n;

	n = 2;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest1);
    ft_strncpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest1);
	printf("\n");

	//ex02
	
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *p_alp;
	p_alp = alpha;

	char special[] = "ABC abc áéíóú àèìòù âêîôû äëïöü \'\"(){}[]!?@#$&* wxyz WXYZ";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only alphabetical chars\n0 = String doesn't contain only alphabetical chars\n\n");
	printf("%s = %d\n", alpha, ft_str_is_alpha(p_alp));
	printf("%s = %d\n", special, ft_str_is_alpha(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_alpha(p_emp));
	printf("\n");

	//ex03
	
	char numeric[] = "0123456789";
	char *p_num;
	p_num = numeric;

	char special2[] = "0123456789_";
	char *p_spe2;
	p_spe2 = special2;

	char empty2[] = "";
	char *p_emp2;
	p_emp2 = empty2;

	printf("-----\n1 = String contains only numerical chars\n0 = String doesn't contain only numerical chars\n\n");
	printf("%s = %d\n", numeric, ft_str_is_numeric(p_num));
	printf("%s = %d\n", special, ft_str_is_numeric(p_spe2));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp2));
	printf("\n");

	//ex04
	
	char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr;
	p_lwr = lowercase;

	char special3[] = "abcdefghijklmnopqrstuvwxyz_";
	char *p_spe3;
	p_spe3 = special3;

	char empty3[] = "";
	char *p_emp3;
	p_emp3 = empty3;

	printf("-----\n1 = String contains only lowercase chars\n0 = String doesn't contain only lowercase chars\n\n");
	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe3));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp3));
	printf("\n");

	//ex05
	
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_upr;
	p_upr = uppercase;

	char special4[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char *p_spe4;
	p_spe4 = special4;

	char empty4[] = "";
	char *p_emp4;
	p_emp4 = empty4;

	printf("-----\n1 = String contains only uppercase chars\n0 = String doesn't contain only uppercase chars\n\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe4));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp4));
	printf("\n");

	//ex06
	
	char string[] = "Normal characters string";
	char *p_str;
	p_str = string;

	char unpr[] = "Unprintables: \t (tab), \a (?)";
	char *p_unp;
	p_unp = unpr;

	char empty5[] = "";
	char *p_emp5;
	p_emp5 = empty5;

	printf("-----\n1 = Contains only printable characters\n0 = Contains unprintable characters\n\n");
	printf("%s = %d\n", string, ft_str_is_printable(p_str));
	printf("%s = %d\n", unpr, ft_str_is_printable(p_unp));
	printf("Empty = %d\n-----\n", ft_str_is_printable(p_emp5));
	printf("\n");

	//ex07
	
	char lowercase1[] = "abcdefghijklmnopqrstuvwxyz";
	char *p_lwr1;
	p_lwr1 = lowercase;

	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all;
	p_all = allcases;

	char empty6[] = "";
	char *p_emp6;
	p_emp6 = empty6;

	printf("\n-----\n%s = ", lowercase1);
	printf("%s\n", ft_strupcase(p_lwr1));
	printf("%s = ", allcases);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp6));
	printf("\n");

	//ex08
	
	char uppercase1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *upr;
	upr = uppercase1;

	char allcases1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_all7;
	p_all7 = allcases1;

	char empty7[] = "";
	char *p_emp7;
	p_emp7 = empty7;

	printf("\n-----\n%s = ", uppercase1);
	printf("%s\n", ft_strlowcase(upr));
	printf("%s = ", allcases1);
	printf("%s\n", ft_strlowcase(p_all7));
	printf("Empty = %s\n-----\n", ft_strlowcase(p_emp7));
	printf("\n");

	//ex09
	
	char str11[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str22[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";
	char empty8[] = "";

	printf("\n-----\nBEF = %s", str11);
	printf("\nAFT = %s\n", ft_strcapitalize(str11));
	printf("\nBEF = %s", str22);
	printf("\nAFt = %s\n", ft_strcapitalize(str22));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty8));
	printf("\n");

	//ex10
	
	char src9[] = "Source";
	char dest9[] = "";
	unsigned int n1;

	n1 = 4;
	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src9, dest9, n1);
    n = ft_strlcpy(dest, src, n);
	printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src9, dest9, n1);
	printf("\n");

	//ex11
	
	char name11[20] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(name11);
}
