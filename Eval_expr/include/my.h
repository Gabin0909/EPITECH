/*
** my.h for my.h in /home/pignol_j/rendu/Piscine_C_J09/include
** 
** Made by julien pignolet
** Login   <pignol_j@epitech.net>
** 
** Started on  Thu Oct  8 13:06:04 2015 julien pignolet
** Last update Wed Oct 21 18:35:28 2015 julien pignolet
*/

#ifndef MY_H_
#define MY_H_

void    my_putchar(char);
int     my_isneg(int);
int     my_put_nbr(int);
int     my_swap(int, int);
int     my_putstr(char*);
int     my_strlen(char*);
int     my_getnbr(char*);
void    my_sort_in_tab(int, int);
int     my_power_rec(int, int);
int     my_square_root(int);
int     my_is_prime(int);
int     my_find_prime_sup(int);
char    *my_strcpy(char*, char*);
char    *my_strncpy(char*, char*, int);
char    *revstr(char*);
char    *my_strstr(char*, char*);
int     my_strcmp(char*, char*);
int     my_strncmp(char*, char*, int);
char    *my_strupcase(char*);
char    *my_strlowcase(char*);
char    *my_strcapitalize(char*);
int     my_str_isalpha(char*);
int     my_str_isnum(char*);
int     my_str_islower(char*);
int     my_str_isupper(char*);
int     my_str_isprintable(char*);
int     my_showstr(char*);
int     my_showmem(char*, int);
char    *my_strcat(char*, char*);
char    *my_strncat(char*, char*, int);
int	my_show_wordtab(char**);
char	**my_str_to_wordtab(char*);
char	*my_strdup(char*);
int	my_getnbr_inf(char *);
int	number(char **);
int	my_strtol(char *, char **);
int	summands(char **);
int	factors(char **);
char	*my_str_no_space(char *);

#endif
