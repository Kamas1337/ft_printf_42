#include <stdio.h>
#include "ft_printf.h"

int main()
{
	char s2[] = "Test";

	ft_printf("----------FT_PRINTF----------\n\n");

	ft_printf("----------%%d----------\n\n");
	ft_printf("1 : %d\n", 1);
	ft_printf("int max : %d\n", 2147483647);
	ft_printf("int min : %d\n", -2147483648);
	ft_printf("3000000000 : %d\n", 3000000000);
	ft_printf("-3000000000 : %d\n", -3000000000);
	ft_printf("0 : %d\n", 0);

	ft_printf("\n----------%%c----------\n\n");
	ft_printf("c : %c\n", 'c');
	ft_printf("'0' + 256 : %c\n", '0' + 256);
	ft_printf("'0' - 256 : %c\n", '0' - 256);
	ft_printf("' ' ' ' ' ' : %c %c %c\n",' ',' ',' ');
	ft_printf("'2' '1' '0' : %c %c %c\n", '2', '1', '0');

	ft_printf("\n----------%%s----------\n\n");
	ft_printf("%s\n", "");
	ft_printf(" %s\n", "");
	ft_printf("%s \n", "");
	ft_printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_printf(" NULL %s NULL \n", NULL);

	ft_printf("\n----------%%i----------\n\n");

	ft_printf(" %i \n", 0);
	ft_printf(" %i \n", -1);
	ft_printf(" %i \n", 100);
	ft_printf(" %i \n", -2147483648);
	ft_printf(" %i \n", 2147483647);
	ft_printf(" %i \n", 3000000000);
	ft_printf(" %i \n", 9223372036854775807LL);

	ft_printf("\n----------%%p----------\n\n");

	ft_printf("%p\n", 1);
	ft_printf("%p\n", -1);
	ft_printf("%p\n", 15);
	ft_printf("%p\n", 20);
	ft_printf("%p %p\n", 2147483648 -2147483648);
	ft_printf("%p %p\n", 4294967295, -4294967295);
	ft_printf("%p\n", 0);
	ft_printf("%p\n", &s2);

	ft_printf("\n----------%%xX---------\n\n");

	ft_printf(" %x \n", 0);
	ft_printf(" %X \n", -1);
	ft_printf(" %x \n", 10);
	ft_printf(" %X \n", -500);
	ft_printf(" %x %x \n", 2147483647, -2147483648);
	ft_printf(" %X %X \n", 4294967295, -4294967295);
	ft_printf(" %x \n", 9223372036854775807LL);

	ft_printf("\n----------%%u----------\n\n");

	ft_printf(" %u \n", 0);
	ft_printf(" %u \n", -1);
	ft_printf(" %u \n", 100);
	ft_printf(" %u \n", -100);
	ft_printf(" %u %u\n", -2147483648, 2147483647);
	ft_printf(" %u %u\n", 4294967295, -4294967290);
	ft_printf(" %u\n", 9223372036854775807LL);

	ft_printf("\n----------%%----------\n\n");

	ft_printf(" %% \n");
	ft_printf(" %%%% \n");
	ft_printf(" %% %% %% \n");
	ft_printf(" %%   %%   %% \n");

	printf("\n\n----------PRINTF----------\n\n");

	printf("----------%%d----------\n\n");
        printf("1 : %d\n", 1);
        printf("int max : %d\n", 2147483647);
        printf("int min : %d\n", -2147483648);
        printf("3000000000 : %d\n", 3000000000);
        printf("-3000000000 : %d\n", -3000000000);
        printf("0 : %d\n", 0);

        printf("\n----------%%c----------\n\n");
        printf("c : %c\n", 'c');
        printf("'0' + 256 : %c\n", '0' + 256);
        printf("'0' - 256 : %c\n", '0' - 256);
        printf("' ' ' ' ' ' : %c %c %c\n",' ',' ',' ');
        printf("'2' '1' '0' : %c %c %c\n", '2', '1', '0');

        printf("\n----------%%s----------\n\n");
        printf("%s\n", "");
        printf(" %s\n", "");
        printf("%s \n", "");
        printf(" %s %s %s %s %s\n", " - ", "", "4", "", s2);
        printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
        printf(" NULL %s NULL \n", NULL);

        printf("\n----------%%i----------\n\n");

        printf(" %i \n", 0);
        printf(" %i \n", -1);
        printf(" %i \n", 100);
        printf(" %i \n", -2147483648);
        printf(" %i \n", 2147483647);
        printf(" %i \n", 3000000000);
        printf(" %i \n", 9223372036854775807LL);

        printf("\n----------%%p----------\n\n");

        printf("%p\n", 1);
        printf("%p\n", -1);
        printf("%p\n", 15);
        printf("%p\n", 20);
        printf("%p %p\n", 2147483648 -2147483648);
        printf("%p %p\n", 4294967295, -4294967295);
        printf("%p\n", 0);
        printf("%p\n", &s2);

        printf("\n----------%%xX---------\n\n");

        printf(" %x \n", 0);
        printf(" %X \n", -1);
        printf(" %x \n", 10);
        printf(" %X \n", -500);
        printf(" %x %x \n", 2147483647, -2147483648);
        printf(" %X %X \n", 4294967295, -4294967295);
        printf(" %x \n", 9223372036854775807LL);

        printf("\n----------%%u----------\n\n");

        printf(" %u \n", 0);
        printf(" %u \n", -1);
        printf(" %u \n", 100);
        printf(" %u \n", -100);
        printf(" %u %u\n", -2147483648, 2147483647);
        printf(" %u %u\n", 4294967295, -4294967290);
        printf(" %u\n", 9223372036854775807LL);

        printf("\n----------%%----------\n\n");

        printf(" %% \n");
        printf(" %%%% \n");
        printf(" %% %% %% \n");
        printf(" %%   %%   %% \n");
        
        printf("\n\n");
        
        int a = -64;
        printf("Valeur de retour : %d\n\n", printf("d : %d\ns : %s\nc : %c\np : %p\nx : %x\nX : %X\n%% : %%\ni : %i\nu : %u\n\n",a, "Test", 'c', &a, a, a, a, -2));
        ft_printf("Valeur de retour : %d\n\n", printf("d : %d\ns : %s\nc : %c\np : %p\nx : %x\nX : %X\n%% : %%\ni : %i\nu : %u\n\n",a, "Test", 'c', &a, a, a, a, -2));
}
