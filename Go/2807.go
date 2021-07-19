package main

import (
	"fmt"
)

func main() {
	var fib[40] int
	var a int
	fib[0] = 1
	fib[1] = 1
	
	for  i:=2 ; i < 40; i++ {
        	fib[i] = fib[i-1] + fib[i-2]
    	}
	fmt.Scanf("%d\n", &a)
	a = a - 1
	for a >= 0{
        	fmt.Print(fib[a])
        	if a != 0{
        	fmt.Print(" ")
       		}
		a = a - 1
   	}
    fmt.Print("\n")
	

}
