#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.hoverclock"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1493]; const double alignment; void * const ptr;}  hoverclock_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\344\000\000\000\000\000\000\050\007\000\000\000"
  "\000\000\000\000\002\000\000\000\002\000\000\000\003\000\000\000"
  "\006\000\000\000\006\000\000\000\007\000\000\000\211\152\323\317"
  "\001\000\000\000\344\000\000\000\015\000\166\000\370\000\000\000"
  "\205\004\000\000\255\223\064\046\005\000\000\000\205\004\000\000"
  "\017\000\114\000\224\004\000\000\234\004\000\000\324\265\002\000"
  "\377\377\377\377\234\004\000\000\001\000\114\000\240\004\000\000"
  "\244\004\000\000\302\257\211\013\002\000\000\000\244\004\000\000"
  "\004\000\114\000\250\004\000\000\254\004\000\000\324\160\100\312"
  "\001\000\000\000\254\004\000\000\016\000\166\000\300\004\000\000"
  "\264\005\000\000\133\141\326\114\006\000\000\000\264\005\000\000"
  "\017\000\114\000\304\005\000\000\310\005\000\000\224\135\334\227"
  "\003\000\000\000\310\005\000\000\007\000\114\000\320\005\000\000"
  "\324\005\000\000\150\157\166\145\162\143\154\157\143\153\056\165"
  "\151\000\000\000\000\000\000\000\175\003\000\000\000\000\000\000"
  "\074\077\170\155\154\040\166\145\162\163\151\157\156\075\042\061"
  "\056\060\042\040\145\156\143\157\144\151\156\147\075\042\125\124"
  "\106\055\070\042\077\076\012\074\151\156\164\145\162\146\141\143"
  "\145\076\074\157\142\152\145\143\164\040\151\144\075\042\167\151"
  "\156\144\157\167\042\040\143\154\141\163\163\075\042\107\164\153"
  "\101\160\160\154\151\143\141\164\151\157\156\127\151\156\144\157"
  "\167\042\076\074\160\162\157\160\145\162\164\171\040\156\141\155"
  "\145\075\042\156\141\155\145\042\076\150\157\166\145\162\143\154"
  "\157\143\153\055\167\151\156\144\157\167\074\057\160\162\157\160"
  "\145\162\164\171\076\074\160\162\157\160\145\162\164\171\040\156"
  "\141\155\145\075\042\164\151\164\154\145\042\040\164\162\141\156"
  "\163\154\141\164\141\142\154\145\075\042\061\042\076\110\157\166"
  "\145\162\143\154\157\143\153\074\057\160\162\157\160\145\162\164"
  "\171\076\074\160\162\157\160\145\162\164\171\040\156\141\155\145"
  "\075\042\144\145\143\157\162\141\164\145\144\042\076\060\074\057"
  "\160\162\157\160\145\162\164\171\076\074\143\150\151\154\144\076"
  "\074\157\142\152\145\143\164\040\143\154\141\163\163\075\042\107"
  "\164\153\102\157\170\042\076\074\160\162\157\160\145\162\164\171"
  "\040\156\141\155\145\075\042\157\162\151\145\156\164\141\164\151"
  "\157\156\042\076\166\145\162\164\151\143\141\154\074\057\160\162"
  "\157\160\145\162\164\171\076\074\143\150\151\154\144\076\074\157"
  "\142\152\145\143\164\040\143\154\141\163\163\075\042\107\164\153"
  "\114\141\142\145\154\042\040\151\144\075\042\164\151\155\145\114"
  "\141\142\145\154\042\076\074\160\162\157\160\145\162\164\171\040"
  "\156\141\155\145\075\042\156\141\155\145\042\076\164\151\155\145"
  "\055\154\141\142\145\154\074\057\160\162\157\160\145\162\164\171"
  "\076\074\160\162\157\160\145\162\164\171\040\156\141\155\145\075"
  "\042\154\141\142\145\154\042\076\060\060\072\060\060\074\057\160"
  "\162\157\160\145\162\164\171\076\074\160\162\157\160\145\162\164"
  "\171\040\156\141\155\145\075\042\150\145\170\160\141\156\144\042"
  "\076\061\074\057\160\162\157\160\145\162\164\171\076\074\160\162"
  "\157\160\145\162\164\171\040\156\141\155\145\075\042\166\145\170"
  "\160\141\156\144\042\076\061\074\057\160\162\157\160\145\162\164"
  "\171\076\074\160\162\157\160\145\162\164\171\040\156\141\155\145"
  "\075\042\150\141\154\151\147\156\042\076\143\145\156\164\145\162"
  "\074\057\160\162\157\160\145\162\164\171\076\074\057\157\142\152"
  "\145\143\164\076\074\057\143\150\151\154\144\076\074\143\150\151"
  "\154\144\076\074\157\142\152\145\143\164\040\143\154\141\163\163"
  "\075\042\107\164\153\114\141\142\145\154\042\040\151\144\075\042"
  "\144\141\164\145\114\141\142\145\154\042\076\074\160\162\157\160"
  "\145\162\164\171\040\156\141\155\145\075\042\156\141\155\145\042"
  "\076\144\141\164\145\055\154\141\142\145\154\074\057\160\162\157"
  "\160\145\162\164\171\076\074\160\162\157\160\145\162\164\171\040"
  "\156\141\155\145\075\042\154\141\142\145\154\042\076\060\060\057"
  "\060\060\057\060\060\060\060\074\057\160\162\157\160\145\162\164"
  "\171\076\074\160\162\157\160\145\162\164\171\040\156\141\155\145"
  "\075\042\150\145\170\160\141\156\144\042\076\061\074\057\160\162"
  "\157\160\145\162\164\171\076\074\160\162\157\160\145\162\164\171"
  "\040\156\141\155\145\075\042\166\145\170\160\141\156\144\042\076"
  "\061\074\057\160\162\157\160\145\162\164\171\076\074\160\162\157"
  "\160\145\162\164\171\040\156\141\155\145\075\042\150\141\154\151"
  "\147\156\042\076\143\145\156\164\145\162\074\057\160\162\157\160"
  "\145\162\164\171\076\074\057\157\142\152\145\143\164\076\074\057"
  "\143\150\151\154\144\076\074\057\157\142\152\145\143\164\076\074"
  "\057\143\150\151\154\144\076\074\057\157\142\152\145\143\164\076"
  "\074\057\151\156\164\145\162\146\141\143\145\076\012\000\000\050"
  "\165\165\141\171\051\150\157\166\145\162\143\154\157\143\153\055"
  "\147\164\153\057\004\000\000\000\000\000\000\000\057\000\000\000"
  "\003\000\000\000\143\157\155\057\006\000\000\000\150\157\166\145"
  "\162\143\154\157\143\153\056\143\163\163\000\000\000\000\000\000"
  "\344\000\000\000\000\000\000\000\043\150\157\166\145\162\143\154"
  "\157\143\153\055\167\151\156\144\157\167\040\173\012\040\040\040"
  "\040\160\141\144\144\151\156\147\072\040\063\160\170\040\066\160"
  "\170\073\012\040\040\040\040\142\141\143\153\147\162\157\165\156"
  "\144\055\143\157\154\157\162\072\040\162\147\142\141\050\060\054"
  "\040\060\054\040\060\054\040\060\056\062\051\073\012\040\040\040"
  "\040\143\157\154\157\162\072\040\167\150\151\164\145\073\012\040"
  "\040\040\040\142\157\162\144\145\162\055\162\141\144\151\165\163"
  "\072\040\064\160\170\073\012\175\012\012\043\164\151\155\145\055"
  "\154\141\142\145\154\012\173\012\040\040\040\040\146\157\156\164"
  "\055\163\151\172\145\072\040\061\062\160\170\073\012\040\040\040"
  "\040\146\157\156\164\055\167\145\151\147\150\164\072\040\142\157"
  "\154\144\073\012\175\012\012\043\144\141\164\145\055\154\141\142"
  "\145\154\012\173\012\040\040\040\040\146\157\156\164\055\163\151"
  "\172\145\072\040\061\061\160\170\073\012\175\012\000\000\050\165"
  "\165\141\171\051\153\157\163\164\157\163\153\151\163\164\145\146"
  "\141\156\057\000\001\000\000\000\147\151\164\150\165\142\057\000"
  "\005\000\000\000" };

static GStaticResource static_resource = { hoverclock_resource_data.data, sizeof (hoverclock_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *hoverclock_get_resource (void);
GResource *hoverclock_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(hoverclockresource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(hoverclockresource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(hoverclockresource_destructor)
#endif
G_DEFINE_DESTRUCTOR(hoverclockresource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void hoverclockresource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void hoverclockresource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
