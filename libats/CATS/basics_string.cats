/***********************************************************************/
/*                                                                     */
/*                         Applied Type System                         */
/*                                                                     */
/***********************************************************************/

/* (*
** ATS/Postiats - Unleashing the Potential of Types!
** Copyright (C) 2010-2019 Hongwei Xi, ATS Trustful Software, Inc.
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
*) */

/* ****** ****** */
//
// Author: Hongwei Xi
// Start Time: May, 2019
// Authoremail: gmhwxiATgmailDOTcom
//
/* ****** ****** */

#define temptory_strcmp strcmp
#define temptory_strcpy strcpy

/* ****** ****** */

#define temptory_strcmp_vt strcmp

/* ****** ****** */
/*
ATSinline()
atstype_bool
atspre_string_equal
( atstype_string cs1
, atstype_string cs2 )
{ return \
  (strcmp(cs1, cs2) == 0) ? 1 : 0 ; }
*/
/* ****** ****** */
//
#define \
temptory_string0_vt_free(cs) ATS_MFREE(cs)
#define \
temptory_string1_vt_free(cs) ATS_MFREE(cs)
//
/* ****** ****** */

/* end of [basics_string.cats] */
