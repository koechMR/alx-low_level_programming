0x15. C - File I/O
The C programming language provides many standard library functions for file input and output. These functions make up the bulk of the C standard library header <stdio.h>.[1] The functionality descends from a "portable I/O package" written by Mike Lesk at Bell Labs in the early 1970s,[2] and officially became part of the Unix operating system in Version 7.[3]

The I/O functionality of C is fairly low-level by modern standards; C abstracts all file operations into operations on streams of bytes, which may be "input streams" or "output streams". Unlike some earlier programming languages, C has no direct support for random-access data files; to read from a record in the middle of a file, the programmer must create a stream, seek to the middle of the file, and then read bytes in sequence from the stream.

The stream model of file I/O was popularized by Unix, which was developed concurrently with the C programming language itself. The vast majority of modern operating systems have inherited streams from Unix, and many languages in the C programming language family have inherited C's file I/O interface with few if any changes (for example, PHP).


