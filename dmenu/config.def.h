/* See LICENSE file for copyright and license details. */
/* kieran fork thing that i stole from suckless */

static int colorprompt = 1; /* i forgot what this does, but im keeping it on */    
static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1; /* -c option; centers dmenu on screen */
static int min_width = 500; /* minimum width when centered */

/* colors, fonts, and words */
static const char *fonts[] = {"monospace:size=10"};
static const char *prompt      = "apps";
static const char col_a[] = "#ffffff";
static const char col_b[] = "#000000";
static const char *colors[SchemeLast][2] = {
	/* typ          fg     bg     */
	[SchemeNorm] ={ col_a, col_b },
	[SchemeSel] = { col_b, col_a },
	[SchemeOut] = { col_b, col_a },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 12;
static const char worddelimiters[] = " ";
static unsigned int border_width = 1;
