package main

import "fmt"

func function(x int) {
	fmt.Println("In function, x= ", x)
}

func main() {
	go function(2)
}
