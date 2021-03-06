(* ****** ****** *)
//
// HX-2019-05-29:
// For ATS-Temptory
//
(* ****** ****** *)
//
#include
"share/HATS\
/temptory_staload_bucs320.hats"
//
(* ****** ****** *)

%{^
#include <time.h>
%} (* %{^ *)

(* ****** ****** *)

implfun
main0((*void*)) = ()

(* ****** ****** *)

impltmp
string0_rand$char<>() =
$UN.cast{CharNZ}
('0' + nat0_rand_max(48))

val () =
$extfcall
( void
, "srand"
, $extfcall(uint, "time", 0)
)
val () = println!(string0_rand())
val () = println!(string0_rand())
val () = println!(string0_rand())
val () = println!(string0_rand())
val () = println!(string0_rand())

(* ****** ****** *)

local
impltmp
grand$val<sint>() =
nat0_rand_max<>(100)
in
val xs = list0_rand<sint>()
val () = println!("xs = ", xs)
end (* end-of-local *)
local
impltmp
grand$val<sint>() =
nat0_rand_max<>(100)
in
val xs = list0_rand<sint>()
val () = println!("xs = ", xs)
end (* end-of-local *)

(* ****** ****** *)

local

impltmp
grand$val<sint>() =
nat0_rand_max<>(100)

impltmp
grand$val<list0(sint)>
  ((*void*)) =
(
let
impltmp
list0_rand$len<>() = 2
in(*let*)
  list0_rand<sint>((*void*))
end(*let*)
)

in
val xss =
(
grand$val<list0(list0(sint))>()
) where
{
  impltmp list0_rand$len<>() = 5
}
val () = println!("xss = ", xss)
end (* end-of-local *)

(* ****** ****** *)

(* end of [test23.dats] *)
