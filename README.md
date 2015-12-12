CSua Module
-----------

This is a sister project of [Sua.](https://github.com/jpedrosa/sua_swift)

This module does 2 things.

**1.** It creates a system-wide library installed to /usr/local that helps to
map a C function called open. It is located in the csua subdirectory and is
built with the help of CMake.

Swift has difficulty mapping to variadic C functions which is an unsupported
feature for now. And soon enough, the Swift project will provide support to
the open function by default as it already does on OSX. This module could become
obsolete by then if we don't find another use for it. Then again, this module
serves as a template for other modules that we may come up with.

**2.** It creates a Swift module at the root directory that needs only 2 files, the
modulemap.module and the Package.swift files. This module calls into the library
installed at the first step above and maps it so that other modules can call
this library. That makes this module a very shallow one, needed only for this
mapping purpose. Putting the 2 repositories together into a single project is
a good idea, I think. And to help to make the name unique as part of a larger
Swift library of same name that depends on it, just appending the Module name
to it already helps a lot. Note also that we give it a C prefix as required
by Swift's project conventions.

License
-------

Same as Swift's.
