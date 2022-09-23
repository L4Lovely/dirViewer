
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 4 > 0
static unsigned char *bytecode_data[4];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_C_Render(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_C_Tab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_F_Technical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$X(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$XK(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$Xatom(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$Xutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$composite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$damage(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$dpms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$ge(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$nvcontrol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$randr(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$record(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$res(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$security(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$shape(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xfixes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xinerama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xinput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$ext$xtest(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$apl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$arabic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$cyrillic(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$greek(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$hebrew(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$katakana(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$korean(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$latin4(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$miscellany(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$publishing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$special(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$technical(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$thai(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xf86(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xk3270(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$keysymdef$xkb(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$display(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$event(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$rq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$protocol$structs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$connect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$support$unix_connect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$threaded(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xauth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$colormap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$cursor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$drawable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$fontable(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$icccm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_Xlib$xobject$resource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_glyphlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util$xorg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$_util$xorg_keysyms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$keyboard$_xorg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pynput$mouse$_xorg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"C_Render", modulecode_C_Render, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gitRepo/dirViewer/C_Render.py"
#endif
},
    {"C_Tab", modulecode_C_Tab, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gitRepo/dirViewer/C_Tab.py"
#endif
},
    {"F_Technical", modulecode_F_Technical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gitRepo/dirViewer/F_Technical.py"
#endif
},
    {"Xlib", modulecode_Xlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/__init__.py"
#endif
},
    {"Xlib.X", modulecode_Xlib$X, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/X.py"
#endif
},
    {"Xlib.XK", modulecode_Xlib$XK, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/XK.py"
#endif
},
    {"Xlib.Xatom", modulecode_Xlib$Xatom, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/Xatom.py"
#endif
},
    {"Xlib.Xutil", modulecode_Xlib$Xutil, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/Xutil.py"
#endif
},
    {"Xlib.display", modulecode_Xlib$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/display.py"
#endif
},
    {"Xlib.error", modulecode_Xlib$error, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/error.py"
#endif
},
    {"Xlib.ext", modulecode_Xlib$ext, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/__init__.py"
#endif
},
    {"Xlib.ext.composite", modulecode_Xlib$ext$composite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/composite.py"
#endif
},
    {"Xlib.ext.damage", modulecode_Xlib$ext$damage, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/damage.py"
#endif
},
    {"Xlib.ext.dpms", modulecode_Xlib$ext$dpms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/dpms.py"
#endif
},
    {"Xlib.ext.ge", modulecode_Xlib$ext$ge, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/ge.py"
#endif
},
    {"Xlib.ext.nvcontrol", modulecode_Xlib$ext$nvcontrol, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/nvcontrol.py"
#endif
},
    {"Xlib.ext.randr", modulecode_Xlib$ext$randr, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/randr.py"
#endif
},
    {"Xlib.ext.record", modulecode_Xlib$ext$record, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/record.py"
#endif
},
    {"Xlib.ext.res", modulecode_Xlib$ext$res, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/res.py"
#endif
},
    {"Xlib.ext.security", modulecode_Xlib$ext$security, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/security.py"
#endif
},
    {"Xlib.ext.shape", modulecode_Xlib$ext$shape, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/shape.py"
#endif
},
    {"Xlib.ext.xfixes", modulecode_Xlib$ext$xfixes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/xfixes.py"
#endif
},
    {"Xlib.ext.xinerama", modulecode_Xlib$ext$xinerama, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/xinerama.py"
#endif
},
    {"Xlib.ext.xinput", modulecode_Xlib$ext$xinput, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/xinput.py"
#endif
},
    {"Xlib.ext.xtest", modulecode_Xlib$ext$xtest, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/ext/xtest.py"
#endif
},
    {"Xlib.keysymdef", modulecode_Xlib$keysymdef, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/__init__.py"
#endif
},
    {"Xlib.keysymdef.apl", modulecode_Xlib$keysymdef$apl, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/apl.py"
#endif
},
    {"Xlib.keysymdef.arabic", modulecode_Xlib$keysymdef$arabic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/arabic.py"
#endif
},
    {"Xlib.keysymdef.cyrillic", modulecode_Xlib$keysymdef$cyrillic, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/cyrillic.py"
#endif
},
    {"Xlib.keysymdef.greek", modulecode_Xlib$keysymdef$greek, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/greek.py"
#endif
},
    {"Xlib.keysymdef.hebrew", modulecode_Xlib$keysymdef$hebrew, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/hebrew.py"
#endif
},
    {"Xlib.keysymdef.katakana", modulecode_Xlib$keysymdef$katakana, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/katakana.py"
#endif
},
    {"Xlib.keysymdef.korean", modulecode_Xlib$keysymdef$korean, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/korean.py"
#endif
},
    {"Xlib.keysymdef.latin1", modulecode_Xlib$keysymdef$latin1, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/latin1.py"
#endif
},
    {"Xlib.keysymdef.latin2", modulecode_Xlib$keysymdef$latin2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/latin2.py"
#endif
},
    {"Xlib.keysymdef.latin3", modulecode_Xlib$keysymdef$latin3, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/latin3.py"
#endif
},
    {"Xlib.keysymdef.latin4", modulecode_Xlib$keysymdef$latin4, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/latin4.py"
#endif
},
    {"Xlib.keysymdef.miscellany", modulecode_Xlib$keysymdef$miscellany, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/miscellany.py"
#endif
},
    {"Xlib.keysymdef.publishing", modulecode_Xlib$keysymdef$publishing, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/publishing.py"
#endif
},
    {"Xlib.keysymdef.special", modulecode_Xlib$keysymdef$special, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/special.py"
#endif
},
    {"Xlib.keysymdef.technical", modulecode_Xlib$keysymdef$technical, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/technical.py"
#endif
},
    {"Xlib.keysymdef.thai", modulecode_Xlib$keysymdef$thai, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/thai.py"
#endif
},
    {"Xlib.keysymdef.xf86", modulecode_Xlib$keysymdef$xf86, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/xf86.py"
#endif
},
    {"Xlib.keysymdef.xk3270", modulecode_Xlib$keysymdef$xk3270, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/xk3270.py"
#endif
},
    {"Xlib.keysymdef.xkb", modulecode_Xlib$keysymdef$xkb, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/keysymdef/xkb.py"
#endif
},
    {"Xlib.protocol", modulecode_Xlib$protocol, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/__init__.py"
#endif
},
    {"Xlib.protocol.display", modulecode_Xlib$protocol$display, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/display.py"
#endif
},
    {"Xlib.protocol.event", modulecode_Xlib$protocol$event, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/event.py"
#endif
},
    {"Xlib.protocol.request", modulecode_Xlib$protocol$request, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/request.py"
#endif
},
    {"Xlib.protocol.rq", modulecode_Xlib$protocol$rq, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/rq.py"
#endif
},
    {"Xlib.protocol.structs", modulecode_Xlib$protocol$structs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/protocol/structs.py"
#endif
},
    {"Xlib.support", modulecode_Xlib$support, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/support/__init__.py"
#endif
},
    {"Xlib.support.connect", modulecode_Xlib$support$connect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/support/connect.py"
#endif
},
    {"Xlib.support.lock", modulecode_Xlib$support$lock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/support/lock.py"
#endif
},
    {"Xlib.support.unix_connect", modulecode_Xlib$support$unix_connect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/support/unix_connect.py"
#endif
},
    {"Xlib.threaded", modulecode_Xlib$threaded, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/threaded.py"
#endif
},
    {"Xlib.xauth", modulecode_Xlib$xauth, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xauth.py"
#endif
},
    {"Xlib.xobject", modulecode_Xlib$xobject, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/__init__.py"
#endif
},
    {"Xlib.xobject.colormap", modulecode_Xlib$xobject$colormap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/colormap.py"
#endif
},
    {"Xlib.xobject.cursor", modulecode_Xlib$xobject$cursor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/cursor.py"
#endif
},
    {"Xlib.xobject.drawable", modulecode_Xlib$xobject$drawable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/drawable.py"
#endif
},
    {"Xlib.xobject.fontable", modulecode_Xlib$xobject$fontable, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/fontable.py"
#endif
},
    {"Xlib.xobject.icccm", modulecode_Xlib$xobject$icccm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/icccm.py"
#endif
},
    {"Xlib.xobject.resource", modulecode_Xlib$xobject$resource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/Xlib/xobject/resource.py"
#endif
},
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gitRepo/dirViewer/main.py"
#endif
},
    {"curses", NULL, 0, 1843, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/curses/__init__.py"
#endif
},
    {"curses.has_key", NULL, 1, 4271, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/curses/has_key.py"
#endif
},
    {"glyphlib", modulecode_glyphlib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/gitRepo/dirViewer/glyphlib.py"
#endif
},
    {"pynput", modulecode_pynput, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/__init__.py"
#endif
},
    {"pynput._util", modulecode_pynput$_util, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/_util/__init__.py"
#endif
},
    {"pynput._util.xorg", modulecode_pynput$_util$xorg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/_util/xorg.py"
#endif
},
    {"pynput._util.xorg_keysyms", modulecode_pynput$_util$xorg_keysyms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/_util/xorg_keysyms.py"
#endif
},
    {"pynput.keyboard", modulecode_pynput$keyboard, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/keyboard/__init__.py"
#endif
},
    {"pynput.keyboard._base", modulecode_pynput$keyboard$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/keyboard/_base.py"
#endif
},
    {"pynput.keyboard._xorg", modulecode_pynput$keyboard$_xorg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/keyboard/_xorg.py"
#endif
},
    {"pynput.mouse", modulecode_pynput$mouse, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/mouse/__init__.py"
#endif
},
    {"pynput.mouse._base", modulecode_pynput$mouse$_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/mouse/_base.py"
#endif
},
    {"pynput.mouse._xorg", modulecode_pynput$mouse$_xorg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/local/lib/python3.9/dist-packages/pynput/mouse/_xorg.py"
#endif
},
    {"site", NULL, 2, 17284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/site.py"
#endif
},
    {"sitecustomize", NULL, 3, 202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/sitecustomize.py"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/six.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

