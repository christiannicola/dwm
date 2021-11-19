/* Bar functionality */
#include "bar_indicators.c"
#include "bar_tagicons.c"

#include "bar_alpha.c"
#include "bar_ltsymbol.c"
#include "bar_status.c"
#include "bar_tags.c"
#include "bar_wintitle.c"

/* Other patches */
#include "attachx.c"
#include "cyclelayouts.c"
#include "ipc.c"
#ifdef VERSION
#include "ipc/IPCClient.c"
#include "ipc/yajl_dumps.c"
#include "ipc/ipc.c"
#include "ipc/util.c"
#endif
#include "restartsig.c"
#include "rotatestack.c"
#include "togglefullscreen.c"
#include "vanitygaps.c"
/* Layouts */
#include "layout_facts.c"
#include "layout_grid.c"
#include "layout_monocle.c"
#include "layout_tile.c"

