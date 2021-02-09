/*
#!/usr/bin/env gorun
# _author_ li_binbin1@gmail.com
*/

package main

import "fmt"

func bigNumberAdd(bignumA string, bignumB string) string {
	A_len := len(bignumA)
	B_len := len(bignumB)

	var maxlen int
	if A_len >= B_len {
		maxlen = A_len
	} else {
		maxlen = B_len
	}

	arrayA := make([]int, A_len + 1)
	for i := 0; i < A_len; i++ {
		arrayA[i] = int(bignumA[A_len -1 -i] - '0')
	}
/*
	for i := 0; i < A_len; i++ {
		fmt.Printf("%d ", arrayA[i])
	}
	fmt.Printf("\n")
*/
	arrayB := make([]int, B_len + 1)
	for i := 0; i < B_len; i++ {
		arrayB[i] = int(bignumB[B_len-1-i] - '0')
	}
/*
	for i := 0; i < B_len; i++ {
		fmt.Printf("%d ", arrayB[i])
	}
	fmt.Printf("\n")
*/
	result := make([]int, maxlen + 1)

	for i := 0; i < len(result); i++ {
		var temp = result[i]
		temp += arrayA[i]
		temp += arrayB[i]

		if temp > 10 {
			temp = temp - 10
			result[i+1] = 1
		}
		result[i] = temp
	}
/*
	for i := 0; i < len(result); i++ {
		fmt.Printf("%d ", result[i])
	}
*/
	var find bool
	var str string
	//sb := make([]string,0)
	for i:= maxlen; i >= 0; i-- {
		if !find {
			if result[i] == 0 {
				continue
			}
			find = true
		}
		//sb = append(sb, string(result[i] + '0'))
		str += string(result[i] + '0')
	}
	return str
}

func main() {
	fmt.Println(bigNumberAdd("3234456", "8561456"))
}
