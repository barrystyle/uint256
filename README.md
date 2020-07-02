uint256 equivalents
===================

ever wanted to know the equivalent for uint256() bitshifts in hexstring?


to use:

g++ -O2 -I. *.cpp -o main


```
uint256(0) >>   1  =  7fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   2  =  3fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   3  =  1fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   4  =  0fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   5  =  07ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   6  =  03ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   7  =  01ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   8  =  00ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>   9  =  007fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  10  =  003fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  11  =  001fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  12  =  000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  13  =  0007ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  14  =  0003ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  15  =  0001ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  16  =  0000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  17  =  00007fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  18  =  00003fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  19  =  00001fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  20  =  00000fffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  21  =  000007ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  22  =  000003ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  23  =  000001ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  24  =  000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  25  =  0000007fffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  26  =  0000003fffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  27  =  0000001fffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  28  =  0000000fffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  29  =  00000007ffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  30  =  00000003ffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  31  =  00000001ffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  32  =  00000000ffffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  33  =  000000007fffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  34  =  000000003fffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  35  =  000000001fffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  36  =  000000000fffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  37  =  0000000007ffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  38  =  0000000003ffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  39  =  0000000001ffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  40  =  0000000000ffffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  41  =  00000000007fffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  42  =  00000000003fffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  43  =  00000000001fffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  44  =  00000000000fffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  45  =  000000000007ffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  46  =  000000000003ffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  47  =  000000000001ffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  48  =  000000000000ffffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  49  =  0000000000007fffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  50  =  0000000000003fffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  51  =  0000000000001fffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  52  =  0000000000000fffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  53  =  00000000000007ffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  54  =  00000000000003ffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  55  =  00000000000001ffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  56  =  00000000000000ffffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  57  =  000000000000007fffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  58  =  000000000000003fffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  59  =  000000000000001fffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  60  =  000000000000000fffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  61  =  0000000000000007ffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  62  =  0000000000000003ffffffffffffffffffffffffffffffffffffffffffffffff
uint256(0) >>  63  =  0000000000000001ffffffffffffffffffffffffffffffffffffffffffffffff
```

