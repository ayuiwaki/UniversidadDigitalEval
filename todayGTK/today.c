#include <glib.h>
#include <gtk/gtk.h>


typedef struct {
glong tv_sec;
glong tv_usec;
} GTimeVal;

int main( int argc, char *argv[])

{

/* current time*/
void g_get_current_time (GTimeVal *result);
g_print(" %f \n",results);

/*current date*/
GDate *date;
date=g_date_new();
g_print(" %s \n",date);
return 0;
}

