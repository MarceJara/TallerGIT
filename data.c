#include <assert.h>
#include <stdio.h>
#include <time.h>

int main(void) {
	FILE *filep;
	filep = fopen("mission_data.txt","w");
	char s[80];
    time_t t;
	t = time(NULL);
    struct tm tm = *localtime(&t);
	fprintf(filep,"MISSION DAY\n", s);
	fprintf(filep,"%02d/%02d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	fclose(filep);
	return 0;
}