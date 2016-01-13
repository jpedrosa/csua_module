CSua Module
-----------

This is a sister project of [Sua.](https://github.com/jpedrosa/sua)

This module was originally started for adding support to the "open" C functions,
but Swift already includes them nowadays. This module currently wraps only the
"environ" API for the environment variables, but Swift may also soon have
support to that API by default.

Nonetheless, this module will still serve as an example of a Swift module that
wraps some C functions. And in case the Sua project requires a few more C APIs,
this module could be used to host them instead.

At the beginning, getting a module such as this one up and running can be a
little difficult. This module also uses CMake which is used for generating the
Makefile in many of the LLVM projects of which Swift is one of the most
representatives.

License
-------

See the [LICENSE](LICENSE.txt) file.
