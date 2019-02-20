let x = 2. + 2;
/*
File "/[elided]/formatting_someTests_case0.re", line 1, characters 8-10:
Error: This expression has type float but an expression was expected of type
         int
=====

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case0.re[0m [2m1:9-10[0m

  [1;31m1[0m [2m│[0m let x = [1;31m2.[0m + 2;

  This has type:
    [1;31mfloat[0m
  But somewhere wanted:
    [1;33mint[0m

You can convert a [1;33mfloat[0m to a [1;33mint[0m with [1;33mint_of_float[0m.If this is a literal, you want a number without a trailing dot (e.g. [1;33m20[0m).
*/

let a: int = "hel

lo"; /**/
/*
File "/[elided]/formatting_someTests_case1.re", line 1, characters 13-22:
Error: This expression has type string but an expression was expected of type
         int
=====

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case1.re[0m [2m1:14-3:3[0m

  [1;31m1[0m [2m│[0m let a: int = [1;31m"hel[0m
  [1;31m2[0m [2m│[0m
  [1;31m3[0m [2m│[0m [1;31mlo"[0m; /**/

  This has type:
    [1;31mstring[0m
  But somewhere wanted:
    [1;33mint[0m
*/

              let a: int = "hel

              lo";
/*
File "/[elided]/formatting_someTests_case2.re", line 1, characters 27-50:
Error: This expression has type string but an expression was expected of type
         int
=====

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case2.re[0m [2m1:28-3:17[0m

  [1;31m1[0m [2m┆[0m let a: int = [1;31m"hel[0m
  [1;31m2[0m [2m┆[0m
  [1;31m3[0m [2m┆[0m [1;31mlo"[0m;

  This has type:
    [1;31mstring[0m
  But somewhere wanted:
    [1;33mint[0m
*/

                      let a: int = "hel

                      lo";
/*  */
/*
File "/[elided]/formatting_someTests_case3.re", line 1, characters 35-66:
Error: This expression has type string but an expression was expected of type
         int
=====

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case3.re[0m [2m1:36-3:25[0m

  [1;31m1[0m [2m│[0m                       let a: int = [1;31m"hel[0m
  [1;31m2[0m [2m│[0m
  [1;31m3[0m [2m│[0m [1;31m                      lo"[0m;
  4 [2m│[0m /*  */

  This has type:
    [1;31mstring[0m
  But somewhere wanted:
    [1;33mint[0m
*/

let a: int = "helllllll

loooooooooooooo";
/*  */
/*
File "/[elided]/formatting_someTests_case4.re", line 1, characters 13-41:
Error: This expression has type string but an expression was expected of type
         int
=====

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case4.re[0m [2m1:14-3:16[0m

  [1;31m1[0m [2m│[0m let a: int = [1;31m"helllllll[0m
  [1;31m2[0m [2m│[0m
  [1;31m3[0m [2m│[0m [1;31mloooooooooooooo"[0m;
  4 [2m│[0m /*  */

  This has type:
    [1;31mstring[0m
  But somewhere wanted:
    [1;33mint[0m
*/

/* single char highlighted */
let asd = {}
/*
File "/[elided]/formatting_someTests_case5.re", line 2, characters 11-11:
Warning 27: unused variable this.
File "/[elided]/formatting_someTests_case5.re", line 1:
Error: CamlinternalOO.cmj not found, it means either the module does not exist or it is a namespace
=====

  [1;33mWarning number 27[0m
  [36m/[elided]/formatting_someTests_case5.re[0m [2m2:12[0m

  1 [2m│[0m /* single char highlighted */
  [1;33m2[0m [2m│[0m let asd = {[1;33m}[0m

  unused variable this.

  [1;31mWe've found a bug for you![0m
  [36m/[elided]/formatting_someTests_case5.re[0m

  CamlinternalOO.cmj not found, it means either the module does not exist or it is a namespace
*/
