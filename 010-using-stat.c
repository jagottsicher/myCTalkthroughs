#include <stdio.h>
#include <sys/stat.h>

int main()
{
	char *filename;
	struct stat fs;
	int r;

	filename = "010-using-stat.c";

	r = stat(filename, &fs);
	if (r == -1)
		printf("Could not read %s\n", filename);
	else
		printf("%s's file size is %lld bytes.\n", filename, fs.st_size);

	return(0);
}

//#include <stdio.h>
//#include <sys/stat.h>
//
////int main(1r)
//{
//    char *filename;
//    struct stat fs;
//    int r;
//
//    /* check for filename argument */
//    if( argc < 2 )
//    {
//        puts("Specify a filename");
//        return(1);
//    }
//
//    /* operate from the first argument */
//    filename = argv[1];
//
//    r = stat(filename, &fs);
//    if( r == -1 )
//        printf("Could not read %s\n", filename);
//    else
//        printf("%s filesize is %lld bytes.\n", filename, fs.st_size);
//
//    return(0);
//}
