from langchain.text_splitter import RecursiveCharacterTextSplitter

code = """
package main
import (
    "fmt"
    "sort"
)
func fibonacci(n int) []int {
    a, b := 0, 1
    seq := []int{}
    for i := 0; i < n; i++ {
        seq = append(seq, a)
        a, b = b, a+b
    }
    return seq
}
func isPrime(x int) bool {
    if x < 2 {
        return false
    }
    for i := 2; i*i <= x; i++ {
        if x%i == 0 {
            return false
        }
    }
    return true
}
func main() {
    nums := fibonacci(15)
    primes := []int{}
    for _, v := range nums {
        if isPrime(v) {
            primes = append(primes, v)
        }
    }
    sort.Ints(primes)
    fmt.Println("Fibonacci:", nums)
    fmt.Println("Primes:", primes)
}
"""

splitter = RecursiveCharacterTextSplitter.from_language(
    language='go',
    chunk_size=100,
    chunk_overlap=5
)

text = splitter.split_text(code)

print(text)