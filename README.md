# Lab3
1. n=3 sum = 6. n=4 sum = 10
2.Overflow values seem to be negatives in signed data types, maybe check for negative output when it is not expected to check for them in signed data types. 256 overflows the first function
3.   113512 overflows the seccond function
4.  Overflow does even return a number, check to see if the returned data is the specified return type to check for overflow. 34 overflowed the third function
5.   171 overflows the fourth function
6. The functions is expected to return 1 for all inputs. With a float the output stops being 1 at 10, with doubles it stops being 1 at 9. A possible cause for this is the double stores more accuracy which causes the error to happen earlier than the smaller float. 
8. using a float causes the function to not recognize that 4.4 < 4.4 and executes the code one too many times. the Double doesnt. This may happen due to a rounding error with the float, while the double is close enough to the real answer that it rounds correctly.
