## why using libft ?

* C programming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project allows you to re-write those functions, understand them,
and learn to use them. This library will help you with all your future C projects.
Take the time to expand your libft throughout the year. But always, make sure to
check which functions are allowed !

 <b> Mandatory part </b> 
 
  ``` In this first part, I re-coded a set of the libc functions, as defined in theirman. My functions present the same behaviors as the originals.```

• isalpha

• isdigit

• isalnum

• isascii

• isprint

• strlen

• memset

• bzero

• memcpy

• memmove

• strlcpy

• strlcat

• toupper

• tolower

• strchr

• strr##chr

• strncmp

• memchr

• memcmp

• strnstr

• atoi

• calloc

• strdup

<b> Additional functions </b>
```In this second part, I re-coded a set of functions that are either not included in thelibc, or included in a different form. Some of these functions can be useful to write Part 1’s functions. ```

ft_substr

ft_strjoin

ft_strtrim

ft_split

ft_itoa

ft_strmapi

ft_striteri

ft_putchar_fd

ft_putstr_fd

ft_putendl_fd

ft_putnbr_fd


## HOW TO RUN :
First make a .c file and include "libft.h", call the functions you want to test, then execute the following commands:
    
    make all 
    gcc <yourfilename>.c libft.a
