(***********************************************************************)
(*                                                                     *)
(*                         Applied Type System                         *)
(*                                                                     *)
(***********************************************************************)

(*
** ATS/Xanadu - Unleashing the Potential of Types!
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
//
// Author: Hongwei Xi
// Start Time: February, 2019
// Authoremail: gmhwxiATgmailDOTcom
//
(* ****** ****** *)

#define tt true
#define ff false

(* ****** ****** *)

#staload "./../SATS/gint.sats"
#staload "./../SATS/glseq.sats"
#staload "./../SATS/list.sats"
#staload "./../SATS/list_vt.sats"

(* ****** ****** *)

impltmp
(x0:vtflt)
glseq_forall0<list0_vt(x0)><x0>
  (xs) =
(
  list0_vt_forall0<x0>(xs)
) where
{
impltmp
list0_vt_forall0$test<x0>(x0) = glseq_forall0$test<x0>(x0)
} (* end of [glseq_forall0] *)

(* ****** ****** *)

impltmp
(x0:vtflt)
glseq_forall1<list0_vt(x0)><x0>
  (xs) =
(
  list0_vt_forall1<x0>(xs)
) where
{
impltmp
list0_vt_forall1$test<x0>(x0) = glseq_forall1$test<x0>(x0)
} (* end of [glseq_forall1] *)

(* ****** ****** *)

impltmp
(x0:vtflt)
glseq_foreach1<list0_vt(x0)><x0>
  (xs) =
(
  list0_vt_foreach1<x0>(xs)
) where
{
impltmp
list0_vt_foreach1$work<x0>(x0) = glseq_foreach1$work<x0>(x0)
} (* end of [glseq_foreach1] *)

(* ****** ****** *)

impltmp
(x0:vtflt)
glseq_rforall1<list0_vt(x0)><x0>
  (xs) =
(
  list0_vt_rforall1<x0>(xs)
) where
{
impltmp
list0_vt_rforall1$test<x0>(x0) = glseq_rforall1$test<x0>(x0)
} (* end of [glseq_rforall1] *)

(* ****** ****** *)

impltmp
(x0:vtflt)
glseq_forall1_ref<list0_vt(x0)><x0>
  (xs) =
(
  list0_vt_forall1_ref<x0>(xs)
) where
{
impltmp
list0_vt_forall1_ref$test<x0>(x0) = glseq_forall1_ref$test<x0>(x0)
} (* end of [glseq_forall1_ref] *)

(* ****** ****** *)

(* end of [glseq_list0.dats] *)
