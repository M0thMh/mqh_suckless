static const char norm_fg[] = "#dfdcd1";
static const char norm_bg[] = "#010000";
static const char norm_border[] = "#9c9a92";

static const char sel_fg[] = "#dfdcd1";
static const char sel_bg[] = "#8C7165";
static const char sel_border[] = "#dfdcd1";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
