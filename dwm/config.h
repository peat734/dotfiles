/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 2;        /* border pixel of windows */
static const unsigned int gappx     = 4;        /* gaps between windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const char *fonts[]          = { "RobotoMono Nerd Font:size=10", "fontawesome:size=12" };
static const unsigned int colorfultag = 1;        /* 0 means use SchemeSel for selected tag */
static const char dmenufont[]       = "RobotoMono Nerd Font:size=10";
static const char col_gray1[]       = "#0A0D0F";
static const char col_gray2[]       = "#141719";
static const char col_gray3[]       = "#0f1214";
static const char col_gray4[]       = "#1F1F28";
//static const char col_cyan[]        = "#b2fff3";
//static const char col_red[]         = "#e78c8c";
//static const char col_pink[]        = "#E46876";
//static const char col_pink[]        = "#ffc2df";
//static const char col_white[]       = "#f8f8f2";
//static const char col_white[]       = "#ffe1e1";
//static const char col_purple[]       = "#bd93f9";
//SAGA COLORSCHEME
//static const char col_lavpink[]       = "#ffaecb";
//static const char col_magenta[]       = "#ff9fbc";
//static const char col_peach[]       = "#ffc79b";
//static const char col_blond[]       = "#fff6c3";
//static const char col_methanol[]       = "#baf7b5";
//static const char col_celeste[]       = "#b2fff3";
//static const char col_mauve[]       = "#dfbaff";
//static const char col_lavender[]       = "#f3ceff";
//static const char col_snow[]       = "#fff6ff";
//NORD COLORSCHEME
//static const char col_nordback1[]       = "#2e3440";
//static const char col_nordback2[]       = "#3b4252";
//static const char col_nordback3[]       = "#434c5e";
//static const char col_nordback4[]       = "#4c566a";
//static const char col_nordwhite[]       = "#eceff4";
//static const char col_nordfrost1[]       = "#8fbcbb";
//static const char col_nordfrost2[]       = "#88c0d0";
//static const char col_nordfrost3[]       = "#81a1c1";
//static const char col_nordaurora1[]       = "#bf616a";
//static const char col_nordaurora2[]       = "#d08770";
//static const char col_nordaurora3[]       = "#ebcb8b";
//static const char col_nordaurora4[]       = "#a3be8c";
//static const char col_nordaurora5[]       = "#b48ead";

//catppuccin mocha COLORSCHEME
static const char col_base[]       = "#1e1e2e";
static const char col_crust[]       = "#11111b";
static const char col_surface0[]       = "#313244";
static const char col_surface1[]       = "#45475a";
static const char col_surface2[]       = "#585b70";
static const char col_text[]       = "#cdd6f4";
static const char col_subtext[]       = "#bac2de";
static const char col_rosewater[]       = "#f5e0dc";
static const char col_flamingo[]       = "#f2cdcd";
static const char col_pink[]       = "#f5c2e7";
static const char col_mauve[]       = "#cba6f7";
static const char col_red[]       = "#f38ba8";
static const char col_maroon[]       = "#eba0ac";
static const char col_peach[]       = "#fab387";
static const char col_yellow[]       = "#f9e2af";
static const char col_green[]       = "#a6e3a1";
static const char col_teal[]       = "#94e2d5";
static const char col_sky[]       = "#89dceb";
static const char col_sapphire[]       = "#74c7ec";
static const char col_blue[]       = "#89b4fa";
static const char col_lavender[]       = "#b4befe";


static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_text, col_base, col_surface0 },
	[SchemeSel]  = { col_crust, col_green,  col_green},

    [SchemeTag]  = { col_text, col_base, NULL }, /* Inactive tag. */
    [SchemeTag1] = { col_pink, col_base,  NULL },
    [SchemeTag2] = { col_mauve, col_base,  NULL },
    [SchemeTag3] = { col_red, col_base,  NULL },
    [SchemeTag4] = { col_peach, col_base,  NULL },
    [SchemeTag5] = { col_yellow, col_base,  NULL },
    [SchemeTag6] = { col_green, col_base,  NULL },
    [SchemeTag7] = { col_teal, col_base,  NULL },
    [SchemeTag8] = { col_sapphire, col_base,  NULL },
    [SchemeTag9] = { col_lavender, col_base,  NULL },
    /* And so forth... */
};

/* tagging */
static const char *tags[] = { "一", "二", "三", "四", "五", "六", "七", "八", "九"};

static const int  tagschemes[] = { SchemeTag1, SchemeTag2, SchemeTag3,SchemeTag4, SchemeTag5, SchemeTag6,SchemeTag7, SchemeTag8, SchemeTag9 };
static const unsigned int ulinepad	= 2;	/* horizontal padding between the underline and tag */
static const unsigned int ulinestroke	= 2;	/* thickness / height of the underline */
static const unsigned int ulinevoffset	= 0;	/* how far above the bottom of the bar the line should appear */
static const int ulineall 		= 0;	/* 1 to show underline on all tags, 0 for just the active ones */

static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class      instance    title       tags mask     isfloating   monitor */
	{ "Gimp",     NULL,       NULL,       0,            1,           -1 },
	{ "Firefox",  NULL,       NULL,       1 << 8,       0,           -1 },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 1;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "[M]",      monocle },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_base, "-nf", col_text, "-sb", col_green, "-sf", col_teal, NULL };
static const char *termcmd[]  = { "urxvt", NULL };
static const char *termcmd2[] = { "kitty", NULL};
static const char *upvol[]   = { "amixer", "-q", "set", "Master", "5%+", "unmute", NULL };
static const char *downvol[] = { "amixer", "-q", "set", "Master", "5%-", "unmute", NULL };

#include <X11/XF86keysym.h>
#include "shiftview.c"
static const Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_d,      spawn,          {.v = dmenucmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
    { MODKEY|Mod1Mask,              XK_Return, spawn,          {.v = termcmd2} },
	{ MODKEY|ShiftMask,             XK_w,      spawn,          SHCMD("firefox")},
    { MODKEY,                       XK_m,      spawn,          SHCMD("rofi -modi drun,run -show drun")},
    { MODKEY,                       XK_Print,  spawn,          SHCMD("flameshot gui")},	
    { ControlMask|Mod1Mask,         XK_l,      spawn,          SHCMD("slock")},
	{ NULL,                         XF86XK_AudioLowerVolume,     spawn,          {.v = downvol }},
    { NULL,                         XF86XK_AudioRaiseVolume,     spawn,          {.v = upvol }},
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY,                       XK_j,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_p,      incnmaster,     {.i = -1 } },
    { ControlMask|Mod1Mask,         XK_Right,  shiftview,      {.i = +1 } },
    { ControlMask|Mod1Mask,         XK_Left,   shiftview,      {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
    { MODKEY|ShiftMask,             XK_Return, zoom,           {0} },
	{ MODKEY,                       XK_Tab,    view,           {0} },
	{ MODKEY,                       XK_c,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_n,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_space,  setlayout,      {0} },
	{ MODKEY|ShiftMask,             XK_space,  togglefloating, {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY,                       XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY,                       XK_minus,  setgaps,        {.i = -1 } },
	{ MODKEY,                       XK_equal,  setgaps,        {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_equal,  setgaps,        {.i = 0  } },
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
	{ MODKEY|ShiftMask,             XK_q,      quit,           {0} },
};

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = termcmd } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,         Button3,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};

