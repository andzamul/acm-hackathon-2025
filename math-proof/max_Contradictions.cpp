#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

/* -find numbers that disprove o = p + 2k^2
   - program will find o, odd, and p, prime
   - if k is not 0, that number will be the contradiction
   -find prime numbers and store them, use Sieve of Eratosthenes algorithm
   -go through that list and only check the odd numbers
 */

bool isPrime(int n)
{
  { for(int i = 2; i <= n/2; i++)
      if(n % i == 0)return false;}

    return true;
}

vector<int> findOddPrimes(int max)
{
  //vector<bool> primeFlag(max, true); //will check till max and sets flag to true
  vector<int> primes;

  //if primeFlag is still true, i will be added to vector prime list
  for(int i = 3; i <= max; i++)
    {if(isPrime(i))
	primes.push_back(i);
      /*      if(i%2 == 0)
	      primes.pop_back(i);*/

      //to take less time..
      //if i is put into the prime vector, multiples of that number cannot be prime
      //starts at 2nd multiple of i and adds i to get to the next multiple
      //      for(int j = i *2; j <= max; j+=i)
      //primeFlag(max,i) = false;
    }
  
  
      return primes;
}

vector<int> findContradictions(vector<int> j)
{
  
  for(int i = 0; i <= j.size() - 1; i++)
    
    }      
  //rewrite the equation to find k^2
  //k^2 = (o-p)/2
 

int main()
{
  vector <int> primes;
  vector <int> contradictions;
  int max = 100;

  primes = findOddPrimes(max);

  contradictions = findContradictions(primes);
  
  for(int i = 0; i <= contradictions.size() - 1; i++)
    cout << i + 1 << ": " << contradictions[i] << endl;
  
  return 0;
}
