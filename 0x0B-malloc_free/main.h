#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int ac, char **av);

#endif /* _MAIN_H_ */
