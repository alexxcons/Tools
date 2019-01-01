


#include <sys/time.h>

static
long long get_timestamp_milli() {
    struct timeval te;
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
    // printf("milliseconds: %lld\n", milliseconds);
    return milliseconds;
}


static void
debug_to_file (const char *message)
{
  FILE *f;
  // file will be created, if not existing
if(TRUE)
  f = fopen("/home/schwinn/thunarDebug.txt", "a");
else
  f = fopen("/home/schwinn/thunarDebug.txt", "w"); // this will overwrite an existing file
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

/* print some text */
fprintf(f, "[%lld]: %s\n", get_timestamp_milli(), message);
fclose(f);
}

// copy + paste
debug_to_file("my_method  start");
debug_to_file("my_method  end");
