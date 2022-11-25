#include <stdio.h>
#include <time.h>

/*
 * The result should look something like
 * Fri 2008-08-22 15:21:59 WAST
 */

int main(void)
{
    time_t     now;
    struct tm *ts;
    char       buf[80];

    /* Get the current time */
    /* convert the seconds since the unix epoch (pointed to by a timer)
    into a "broken-down time expressed as local time" considering timezone,
    seasonal adjustments and so on*/
    now = time(NULL);
    // printf("\"Now\" is: %u\n", now);
    // printf("\"Now\" is: %ld\n", now);
    printf("\"Now\" is: %zu\n", now);

    /* Format and print the time, "ddd yyyy-mm-dd hh:mm:ss zzz" */
    ts = localtime(&now);
    // printf("\"ts\" is: %ld\n", ts);

    strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", ts);
    puts(buf);

    // printf("\"buf\" is of %d bytes in size\n", sizeof(buf));
    //                       ~~                  ^~~~~~~~~~~~~
    //                      %lu is the better choice here!

    return 0;
}
