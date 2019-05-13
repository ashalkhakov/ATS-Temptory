(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Xanadu - Unleashing the Potential of Types!
** Copyright (C) 2019 Hongwei Xi, ATS Trustful Software, Inc.
** All rights reserved
**
** ATS is free software;  you can  redistribute it and/or modify it under
** the terms of  the GNU GENERAL PUBLIC LICENSE (GPL) as published by the
** Free Software Foundation; either version 3, or (at  your  option)  any
** later version.
** 
** ATS is distributed in the hope that it will be useful, but WITHOUT ANY
** WARRANTY; without  even  the  implied  warranty  of MERCHANTABILITY or
** FITNESS FOR A PARTICULAR PURPOSE.  See the  GNU General Public License
** for more details.
** 
** You  should  have  received  a  copy of the GNU General Public License
** along  with  ATS;  see the  file COPYING.  If not, please write to the
** Free Software Foundation,  51 Franklin Street, Fifth Floor, Boston, MA
** 02110-1301, USA.
*)

(* ****** ****** *)
//
// Author: Hongwei Xi
// Start Time: May, 2019
// Authoremail: gmhwxiATgmailDOTcom
//
(* ****** ****** *)

#define
ATS_PACKNAME "temptory."
#define
ATS_EXTERN_PREFIX "temptory_"

(* ****** ****** *)

%{#
//
#ifdef \
_TEMPTORY_LIBATS_SATS_STDIO_
#else
#define \
_TEMPTORY_LIBATS_SATS_STDIO_
#include <stdio.h>
typedef char *charptr;
#endif // _TEMPTORY_LIBATS_SATS_STDIO_
//
%}(* end of [%{#] *)

(* ****** ****** *)

typedef
charptr = $extype"charptr"

(* ****** ****** *)
//
abstbox
FILEref_tbox = ptr
typedef
FILEref = FILEref_tbox
//
(* ****** ****** *)
//
fun{}
the_stdin(): FILEref // STDIN
fun{}
the_stdout(): FILEref // STDOUT
fun{}
the_stderr(): FILEref // STDERR
//
(* ****** ****** *)
//
fun
{a:vtflt}
fprint$val
(out: FILEref, x: !a): void
fun
{a:vtflt}
fprint$ref
(out: FILEref, x: &INV(a)): void
//
(* ****** ****** *)

fun{}
fprint_newline(out: FILEref): void

(* ****** ****** *)

(* end of [stdio.sats] *)
