
let {eq_suites} = module (Mt)
let id = ref(0)
let suites = ref(list{})
let u = #"1"


type t = [
    | #"0"
    | #"1"
    | #"2"
]
type h = 
    | A (t)
    | B (t,int )

let nest = (x : h) => {
    switch(x){
        | A(#"0") => 0 
        | A(#"1") => 1
        | A (_) => 2 
        | B(_,0) => 3 
        | B(#"1",_) => 4
        | B(#"2",_) => 5
        | B(#"0",_) => 6

    }
}     
@inline
let f = (x:t) => {
    switch(x){
        |#"0" => 'a'
        |#"1" => 'b'
        |#"2" => 'c'
    }
}

let f2 = (x,b) => {
    switch(x){
        |#"0" => 3 
        |#"1" => b
        |#"c" => 33
        |#"2" => 0
    }
}


// typeof x === "string"
// is no longer correct
// we should use !== "object"
let f3 = (x,b) => {
    switch(x){
        |#"12" (y) => y 
        |#"23" (z) => z         
        |#"32"(h,_) => h 
        |#"3" => 3 
        |#"333" (_,h) => h
    }
}
let h = (x) => x == #"0" 

let g = f (#"1")

let hihi = f3 (#"3",0)

let hh9 = 3 == Obj.magic(#"3")
let hh10 = "3" == Obj.magic(#"3")
let tuple = (
    nest(A(#"0")),
    nest(A(#"1")),
    nest(A(#"2")),
    nest(B(#"1",0)),
    nest(B(#"1",1)),
    nest(B(#"2",1)),
    nest(B(#"2",2)),
    nest(B(#"0",0)),
    nest(B(#"0",1)),
    hh9,
    hh10
)
eq_suites(id,suites,__LOC__,hihi,3)
eq_suites(id,suites,__LOC__,tuple,(0,1,2,3,4,5,5,3,6,true,false))
Mt.from_pair_suites(__FILE__,suites.contents)