#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
ssize_t ft_write(int fd, const void *buf, size_t count);

int main()
{
	/*****************************************************+ ft_strlen ***************************************************/

	// char *str = "";
	// char *str = "hello, world!";
	// char *str = "hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! hello, world! ";
	// char *str = "HELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLD";
	// char *str = "HELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLDHELLO WORLD *++`++´ç-.,º12423566889'¡¿?=)(/&$·ª|@#¢∞¬÷““”≠´´´‚][[π}{–…„µ_:;Ç¨^*^ªºº HELLO WORLD";

	// printf("%zu\n", ft_strlen(str));
	// printf("%lu\n", strlen(str));

	/*****************************************************+ ft_strcmp ***************************************************/

	// char *s1 = "NULL *+ç´p`.;<>,;.:-_çÇ´¨+*`^`p123''¡ºª|#¢∞¬÷”≠´@";
	// char *s2 = "NULL *+ç´p`.;<>,;.:-_çÇ´¨+*`^`p123''¡ºª|#¢∞¬÷”≠´";
	// printf("%d\n", ft_strcmp(s1, s2));
	// printf("%d\n", strcmp(s1, s2));

	/*****************************************************+ ft_write ***************************************************/

	// char *str = "12345";
	// int fd = open("./text.txt", O_WRONLY | O_CREAT);
	// ft_write(fd, &str, 5);

	/*****************************************************+ ft_read ***************************************************/

	// char buff[10000];
	// int fd = open("./text.txt", O_RDWR | O_CREAT);
	// int res = ft_read(fd, &buff, 10000 - 1);
	// printf("%s\t[%d]\n", buff, res);

	/*****************************************************+ ft_strcpy ***************************************************/

	// char dst1[100] = "....";
	// char src1[100] = "";
	// ft_strcpy(dst1, src1);
	// printf("%s\n",dst1);

	// char dst2[100] = "....";
	// char src2[100] = "";
	// ft_strcpy(dst2, src2);
	// printf("%s\n",dst2);


	/*****************************************************+ ft_strdup ***************************************************/

	// char *str = ft_strdup("12313213212131322312312313113132132131332123");
	// printf("%s\n", str);

	return 0;
}
