


static void
debug_to_file (const char *message, gboolean append = TRUE)
{
  FILE *f;
  // file will be created, if not existing
if(append)
  f = fopen("/home/schwinn/thunarDebug.txt", "a");
else
  f = fopen("/home/schwinn/thunarDebug.txt", "w"); // this will overwrite an existing file
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

// copy + paste
debug_to_file("my_method  start");
debug_to_file("my_method  end");
