igcd := [ :a :b |
    | u v |
    u := a. v := b.
    [ v > 0 ]
        whileTrue: [ |c|
            c := u.
            u := v.
            v := c rem: v
        ].
    u abs
].

(igcd value: 54 value: 96) printNl.