(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2011-2019 Hongwei Xi, ATS Trustful Software, Inc.
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

(* Author: Hongwei Xi *)
(* Start time: August, 2013 *)
(* Authoremail: hwxiATcsDOTbuDOTedu *)

(* ****** ****** *)
//
abstbox
hmapref_tbox
(k0:vtflt, x0:vtflt+) = ptr
typedef
hmapref
(k0:vtflt, x0:vtflt) = hmapref_tbox(k0, x0)
//
absvtbox
hashmap_vtbox
(k0:vtflt, x0:vtflt+) = ptr
vtypedef
hashmap
(k0:vtflt, x0:vtflt) = hashmap_vtbox(k0, x0)
//
(* ****** ****** *)

sexpdef href = hmapref
sexpdef hmap = hashmap

(* ****** ****** *)

fun
{k0:vtflt}
hash_key(k0: !k0):<> ulint
fun
{k0:vtflt}
equal_key_key
(k1: !k0, k2: !k0):<> bool

(* ****** ****** *)
//
// HX: for recapacitizing policy
//
fun{}
hashmap$recapacitize(): int
//
(* ****** ****** *)

fun
{k0
,x0:vtflt}
hashmap_nil
(cap: Sizegte(1)): hmap(k0, x0)
fun
{k0,x0:vtflt}
hashmap_make_nil
(cap: Sizegte(1)): hmap(k0, x0)

(* ****** ****** *)
//
// HX: the number of stored elements
//
fun{}
hashmap_size
{k0,x0:vtflt}
(map: !hmap(k0, INV(x0))):<> Sizegte(0)
// end of [hashmap_size]

(* ****** ****** *)
//
// HX: the array size of the hashtable
//
fun{}
hashmap_capacity
{k0,x0:vtflt}
(map: !hmap(k0, INV(x0))):<> Sizegte(1)
// end of [hashmap_capacity]
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_free(map: hmap(k0, INV(x0))): void
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_search
( map
: !hmap(k0, INV(x0))
, k0: !k0
, r0: &x0? >> opt(x0, b)): #[b:bool] bool(b)
fun
{k0,x0:vtflt}
hashmap_search_ref
(map: !hmap(k0, INV(x0)), k0: !k0): cptr0(x0)
// end of [hashmap_search_ref]
fun
{k0,x0:vtflt}
hashmap_search_opt
(map: !hmap(k0, INV(x0)), k0: !k0): optn0_vt(x0)
// end of [hashmap_search_opt]
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_insert
( map
: !hmap(k0, INV(x0))
, k0: k0, x0: x0
, res: &x0? >> opt(x0, b)) : #[b:bool] bool(b)
fun
{k0,x0:vtflt}
hashmap_insert_any
(map: !hmap(k0, INV(x0)), k0: k0, x0: x0): void
fun
{k0,x0:vtflt}
hashmap_insert_opt
( map
: !hmap(k0, INV(x0)), k0: k0, x0: x0): optn0_vt(x0)
// end of [hashmap_insert_opt]
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_remove
(map: !hmap(k0, INV(x0)), k0: !k0): bool
//
fun
{k0,x0:vtflt}
hashmap_takeout
( map
: !hmap(k0, INV(x0))
, k0: !k0
, r0: &x0? >> opt(x0, b)): #[b:bool] bool(b)
fun
{k0,x0:vtflt}
hashmap_takeout_opt
(map: !hmap(k0, INV(x0)), k0: !k0): optn0_vt(x0)
// end of [hashmap_takeout_opt]
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_takeout_all
(map: !hmap(k0, INV(x0))): list0_vt(@(k0, x0))
// end of [hashmap_takeout_all]
//
(* ****** ****** *)
//
fun
{k0,x0:vtflt}
hashmap_reset_capacity
(map: !hmap(k0, INV(x0)), cap2: Sizegte(1)): bool
fun
{k0,x0:vtflt}
hashmap_adjust_capacity(!hmap(k0, INV(x0))): bool
//
(* ****** ****** *)

(* end of [hashmap.hats] *)
