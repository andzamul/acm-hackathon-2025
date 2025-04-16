#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Check if a number is prime
bool isPrime(int n) {
 //makes sure n is greater than 1
    if (n < 2) return false;
//calculates the square root of n and converts it to an integer
    int sqrtN = static_cast<int>(sqrt(n));
    for (int i = 2; i <= sqrtN; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

// Generate all primes up to a limit using sieve HELPING WITH EFFICIENCY!!!
vector<int> generatePrimes(int limit) {
	//adds prime to vectore exept 0 and 1 since they are not prime
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
//sieve of eratosthenes
    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
//finds all primes and adds them to the vector
    vector<int> primes;
    for (int i = 2; i <= limit; ++i) {
	    //adds prime to vector
        if (is_prime[i]) primes.push_back(i);
    }

    return primes;
}

int main() {
    int k;
	//loops until user enters 0
    cout << "Enter an odd composite number k: ";
    cin >> k;

    if (k % 2 == 0 || isPrime(k)) {
        cout << "The number must be an odd composite number.\n";
        return 1;
    }

    // Generate primes up to k HEWLPING WITH EFFICIENCY!!!
    vector<int> primes = generatePrimes(k);

    bool found = false;
	//tracks if we found a solution
    for (int p : primes) {
	     //loops through p up to K!
        if (p >= k) break;
        //EFFICIENCY!!!
        //math
        int remainder = k - p;
        if (remainder % 2 == 0) {
            int square = remainder / 2;
            int root = static_cast<int>(sqrt(square));
            if (root * root == square) {
		     //if the square root of the square is equal to the square then it is a perfect square
                cout << k << " = " << p << " + 2 * (" << root << ")^2\n";
                found = true;
                break;
            }
        }
    }
//if the number cannot be written as p + 2 * n^2 then it outputs the counterexample to the conjecture
        //this is the main part of the program
    if (!found) {
        cout << k << " cannot be written as p + 2 * n^2 (counterexample to the conjecture).\n";
    }

    return 0;
}
