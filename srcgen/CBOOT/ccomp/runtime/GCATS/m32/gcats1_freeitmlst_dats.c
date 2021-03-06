/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-9-3:  2h:41m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/option.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/matrix.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */

/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */
ATSextern_fun(ats_void_type, atspre_prerr_newline) () ;
ATSextern_fun(ats_bool_type, atspre_gt_int_int) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_int_type, atspre_iadd) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_bool_type, atspre_ilt) (ats_int_type, ats_int_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_ptr) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, atspre_prerr_string) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, freeitmlst2ptr) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, freeitmlst_is_nil) (ats_ptr_type) ;
ATSextern_fun(ats_bool_type, freeitmlst_is_cons) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, freeitmlst_tail_get) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, the_freeitmlst_array_get) (ats_int_type) ;
ATSextern_fun(ats_void_type, the_freeitmlst_array_clear_one) (ats_int_type) ;
ATSextern_fun(ats_bool_type, chunklst_is_cons) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, chunklst_markbits_get) (ats_ptr_type) ;
ATSextern_fun(ats_void_type, chunklst_markcnt_dec) (ats_ptr_type) ;
ATSextern_fun(ats_ptr_type, gc_ptr_is_valid) (ats_ptr_type, ats_ref_type) ;
ATSextern_fun(ats_int_type, MARK_GET) (ats_ptr_type, ats_int_type) ;
ATSextern_fun(ats_void_type, MARK_CLEAR) (ats_ptr_type, ats_int_type) ;

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */
static
ats_int_type gcats1_freeitmlst_loop_1 (ats_ptr_type arg0, ats_int_type arg1) ;
static
ats_void_type gcats1_freeitmlst_loop_3 (ats_int_type arg0) ;
static
ats_void_type gcats1_freeitmlst_freeitmlst_mark_unset_4 (ats_ptr_type arg0) ;
static
ats_void_type gcats1_freeitmlst_loop_6 (ats_int_type arg0) ;

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 1707(line=52, offs=7) -- 1872(line=57, offs=8)
*/
ATSstaticdec()
ats_int_type
gcats1_freeitmlst_loop_1 (ats_ptr_type arg0, ats_int_type arg1) {
/* local vardec */
ATSlocal (ats_int_type, tmp1) ;
ATSlocal (ats_bool_type, tmp2) ;
ATSlocal (ats_ptr_type, tmp3) ;
ATSlocal (ats_int_type, tmp4) ;

__ats_lab_gcats1_freeitmlst_loop_1:
#line 54 "gcats1_freeitmlst.dats"
tmp2 = freeitmlst_is_nil (arg0) ;
#line 54 "gcats1_freeitmlst.dats"
if (tmp2) {
#line 54 "gcats1_freeitmlst.dats"
tmp1 = arg1 ;
} else {
#line 56 "gcats1_freeitmlst.dats"
tmp3 = freeitmlst_tail_get (arg0) ;
#line 56 "gcats1_freeitmlst.dats"
tmp4 = atspre_iadd (arg1, 1) ;
#line 56 "gcats1_freeitmlst.dats"
arg0 = tmp3 ;
#line 56 "gcats1_freeitmlst.dats"
arg1 = tmp4 ;
#line 56 "gcats1_freeitmlst.dats"
goto __ats_lab_gcats1_freeitmlst_loop_1 ; // tail call
} /* end of [if] */
return (tmp1) ;
} /* end of [gcats1_freeitmlst_loop_1] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 1688(line=51, offs=29) -- 1896(line=60, offs=4)
*/
ATSglobaldec()
ats_int_type
freeitmlst_length (ats_ptr_type arg0) {
/* local vardec */
ATSlocal (ats_int_type, tmp0) ;

__ats_lab_freeitmlst_length:
#line 59 "gcats1_freeitmlst.dats"
tmp0 = gcats1_freeitmlst_loop_1 (arg0, 0) ;
return (tmp0) ;
} /* end of [freeitmlst_length] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 2038(line=66, offs=7) -- 2171(line=69, offs=8)
*/
ATSstaticdec()
ats_void_type
gcats1_freeitmlst_loop_3 (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp6) ;
ATSlocal (ats_bool_type, tmp7) ;
ATSlocal (ats_int_type, tmp8) ;
// ATSlocal_void (tmp9) ;
ATSlocal (ats_int_type, tmp10) ;

__ats_lab_gcats1_freeitmlst_loop_3:
#line 67 "gcats1_freeitmlst.dats"
tmp8 = atspre_iadd (11, 1) ;
#line 67 "gcats1_freeitmlst.dats"
tmp7 = atspre_ilt (arg0, tmp8) ;
#line 67 "gcats1_freeitmlst.dats"
if (tmp7) {
#line 68 "gcats1_freeitmlst.dats"
/* tmp9 = */ the_freeitmlst_array_clear_one (arg0) ;
#line 68 "gcats1_freeitmlst.dats"
tmp10 = atspre_iadd (arg0, 1) ;
#line 68 "gcats1_freeitmlst.dats"
arg0 = tmp10 ;
#line 68 "gcats1_freeitmlst.dats"
goto __ats_lab_gcats1_freeitmlst_loop_3 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp6) */ ;
} /* end of [gcats1_freeitmlst_loop_3] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 1990(line=64, offs=42) -- 2189(line=72, offs=4)
*/
ATSglobaldec()
ats_void_type
the_freeitmlst_array_clear_all () {
/* local vardec */
// ATSlocal_void (tmp5) ;

__ats_lab_the_freeitmlst_array_clear_all:
#line 71 "gcats1_freeitmlst.dats"
/* tmp5 = */ gcats1_freeitmlst_loop_3 (0) ;
return /* (tmp5) */ ;
} /* end of [the_freeitmlst_array_clear_all] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 2259(line=76, offs=5) -- 3035(line=96, offs=4)
*/
ATSstaticdec()
ats_void_type
gcats1_freeitmlst_freeitmlst_mark_unset_4 (ats_ptr_type arg0) {
/* local vardec */
// ATSlocal_void (tmp11) ;
ATSlocal (ats_bool_type, tmp12) ;
ATSlocal (ats_int_type, tmp13) ;
ATSlocal (ats_ptr_type, tmp14) ;
ATSlocal (ats_ptr_type, tmp15) ;
ATSlocal (ats_ptr_type, tmp16) ;
ATSlocal (ats_bool_type, tmp17) ;
// ATSlocal_void (tmp18) ;
// ATSlocal_void (tmp19) ;
// ATSlocal_void (tmp20) ;
ATSlocal (ats_ptr_type, tmp21) ;
// ATSlocal_void (tmp22) ;
ATSlocal (ats_bool_type, tmp23) ;
ATSlocal (ats_int_type, tmp24) ;
// ATSlocal_void (tmp25) ;
ATSlocal (ats_ptr_type, tmp26) ;

__ats_lab_gcats1_freeitmlst_freeitmlst_mark_unset_4:
#line 77 "gcats1_freeitmlst.dats"
tmp12 = freeitmlst_is_cons (arg0) ;
#line 77 "gcats1_freeitmlst.dats"
if (tmp12) {
#line 78 "gcats1_freeitmlst.dats"
/* ats_int_type tmp13 ; */
#line 78 "gcats1_freeitmlst.dats"
tmp13 = 0 ;
#line 78 "gcats1_freeitmlst.dats"
tmp14 = freeitmlst2ptr (arg0) ;
#line 79 "gcats1_freeitmlst.dats"
tmp15 = gc_ptr_is_valid (tmp14, (&tmp13)) ;
#line 80 "gcats1_freeitmlst.dats"
tmp17 = chunklst_is_cons (tmp15) ;
#line 80 "gcats1_freeitmlst.dats"
if (tmp17) {
#line 80 "gcats1_freeitmlst.dats"
tmp16 = tmp15 ;
} else {
#line 81 "gcats1_freeitmlst.dats"
/* tmp18 = */ atspre_prerr_string (ATSstrcst("freeitmlst_mark_unset: illegal pointer: ptr = ")) ;
#line 82 "gcats1_freeitmlst.dats"
/* tmp19 = */ atspre_prerr_ptr (tmp14) ;
#line 83 "gcats1_freeitmlst.dats"
/* tmp20 = */ atspre_prerr_newline () ;
#line 84 "gcats1_freeitmlst.dats"
/* tmp16 = */ ats_exit (1) ;
} /* end of [if] */
#line 87 "gcats1_freeitmlst.dats"
tmp21 = chunklst_markbits_get (tmp16) ;
#line 89 "gcats1_freeitmlst.dats"
tmp24 = MARK_GET (tmp21, tmp13) ;
#line 89 "gcats1_freeitmlst.dats"
tmp23 = atspre_gt_int_int (tmp24, 0) ;
#line 89 "gcats1_freeitmlst.dats"
if (tmp23) {
#line 91 "gcats1_freeitmlst.dats"
/* tmp25 = */ MARK_CLEAR (tmp21, tmp13) ;
#line 91 "gcats1_freeitmlst.dats"
/* tmp22 = */ chunklst_markcnt_dec (tmp16) ;
} else {
/* empty */
} /* end of [if] */
#line 94 "gcats1_freeitmlst.dats"
tmp26 = freeitmlst_tail_get (arg0) ;
#line 94 "gcats1_freeitmlst.dats"
arg0 = tmp26 ;
#line 94 "gcats1_freeitmlst.dats"
goto __ats_lab_gcats1_freeitmlst_freeitmlst_mark_unset_4 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp11) */ ;
} /* end of [gcats1_freeitmlst_freeitmlst_mark_unset_4] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 3165(line=102, offs=7) -- 3314(line=105, offs=8)
*/
ATSstaticdec()
ats_void_type
gcats1_freeitmlst_loop_6 (ats_int_type arg0) {
/* local vardec */
// ATSlocal_void (tmp28) ;
ATSlocal (ats_bool_type, tmp29) ;
ATSlocal (ats_int_type, tmp30) ;
// ATSlocal_void (tmp31) ;
ATSlocal (ats_ptr_type, tmp32) ;
ATSlocal (ats_int_type, tmp33) ;

__ats_lab_gcats1_freeitmlst_loop_6:
#line 103 "gcats1_freeitmlst.dats"
tmp30 = atspre_iadd (11, 1) ;
#line 103 "gcats1_freeitmlst.dats"
tmp29 = atspre_ilt (arg0, tmp30) ;
#line 103 "gcats1_freeitmlst.dats"
if (tmp29) {
#line 104 "gcats1_freeitmlst.dats"
tmp32 = the_freeitmlst_array_get (arg0) ;
#line 104 "gcats1_freeitmlst.dats"
/* tmp31 = */ gcats1_freeitmlst_freeitmlst_mark_unset_4 (tmp32) ;
#line 104 "gcats1_freeitmlst.dats"
tmp33 = atspre_iadd (arg0, 1) ;
#line 104 "gcats1_freeitmlst.dats"
arg0 = tmp33 ;
#line 104 "gcats1_freeitmlst.dats"
goto __ats_lab_gcats1_freeitmlst_loop_6 ; // tail call
} else {
/* empty */
} /* end of [if] */
return /* (tmp28) */ ;
} /* end of [gcats1_freeitmlst_loop_6] */

/*
// /home/hwxi/research/Anairiats/ccomp/runtime/GCATS1/gcats1_freeitmlst.dats: 3117(line=100, offs=43) -- 3347(line=108, offs=4)
*/
ATSglobaldec()
ats_void_type
the_freeitmlst_array_mark_unset () {
/* local vardec */
// ATSlocal_void (tmp27) ;

__ats_lab_the_freeitmlst_array_mark_unset:
#line 107 "gcats1_freeitmlst.dats"
/* tmp27 = */ gcats1_freeitmlst_loop_6 (0) ;
return /* (tmp27) */ ;
} /* end of [the_freeitmlst_array_mark_unset] */

/* static load function */

extern ats_void_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload (void) ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__staload () {
static int ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__staload_flag = 0 ;
if (ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__staload_flag) return ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__staload_flag = 1 ;

ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
extern ats_int_type ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__dynload_flag ;

ats_void_type
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__dynload () {
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__dynload_flag = 1 ;
ATS_2d0_2e2_2e10_2ccomp_2runtime_2GCATS1_2gcats1_freeitmlst_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [gcats1_freeitmlst_dats.c] */
