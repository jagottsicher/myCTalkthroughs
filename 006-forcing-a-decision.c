#include <stdio.h>

int main()
{
    /* Abandoned to include something to have a
       data type bool, have two ints instead */
    const int true = 1, false = 0;
    int ch, done;

    /* prepare before the loop */
    done = false;    /* the loop is not done at this point */

    while(!done)    /* "while not done" because
                       !done (not done) == TRUE */
    {
        printf("You must choose A, B, or C: ");
        ch = getchar();

        /* check their results */
        switch(ch)
        {
            /* check for both upper- and lowercase */
            case 'A':
            case 'a':
                /* do whatever */
                puts("Doing option A");
                /* end the loop condition */
                done = true;
                break;
            case 'B':
            case 'b':
                puts("Doing option B");
                done = true;
                break;
            case 'C':
            case 'c':
                puts("Doing option C");
                done = true;
                break;
            default:
                puts("Invalid choice");

                /* empty the stdin buffer */
                while( getchar() != '\n' );
        }
    }
    puts("Thank you for good behavior.");

    return(0);
}
