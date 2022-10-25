#include <gmp.h>

int main()
{
	mpz_t a,b,x;

	/* initialize */
	mpz_init(a);
	mpz_init(b);
	mpz_init(x);

	/* set values */
	mpz_set_ui(a,3000000000);	/* three billion */
	mpz_set_ui(b,5000000000);	/* five billion */

	/* add the values */
	mpz_add(x,a,b);
	/* output */
	gmp_printf("%Zd + %Zd = %Zd\n",a,b,x);

	/* multiply */
//	mpz_init(x);
	mpz_addmul(x,a,b);
	/* output */
	gmp_printf("%Zd * %Zd = %Zd\n",a,b,x);

	return(0);
}

// Simple test how gmp works:
//#include <gmp.h>
//
//int main()
//{
//    mpz_t i;
//    mpz_init(i);
//
//    /* i equals one billion */
//    mpz_set_ui(i,1000000000);
//    gmp_printf("%Zd\n",i);
//
//    return(0);
//}

// check if compiler accepts to include gmp header file
//#include <stdio.h>
//#include <gmp.h>
//
//int main()
//{
//    printf("GMP version: %d\n",__GNU_MP_RELEASE);
//    return(0);
//}

// Print out a long long
//#include <stdio.h>
//
//int main()
//{
//	unsigned long long i = 0;
//
//	while(1) {
//		printf("%llu\n",i);
//		i++;
//	}
//	return(0);
//}

// iterate over out a long long only
//#include <stdio.h>
//
//int main()
//{
//    unsigned long long i = 0;
//
//    while(i++)
//        printf("%llu\n",i);
//
//    return(0);
//}
