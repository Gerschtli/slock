/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#3077a0",   /* after initialization */
	[INPUT] =  "#2c7f1f",   /* during input */
	[FAILED] = "#330606",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
