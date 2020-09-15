#include <iostream>
#include <cstdlib>

int next_collatz_term(int n); // gives the next collatz term in a sequence
int maximum_collatz(int n0); // computes the full collatz sequence starting from n0 and returns the maximum term

int main(int argc, char **argv)
{
    int N = std::atoi(argv[1]);
    int maxval = -1, n0max = -1;
    for (int ii = 1; ii <= N; ++ii) {
        if (maximum_collatz(ii) > maxval){
          maxval = maximum_collatz(ii);
          n0max = ii;
        }
    }
    std::cout << n0max << " -> " << maxval << "\n";
  
    return 0;
}

int next_collatz_term(int n)
{
    if (n == 1) return 1;
    if (n%2 == 0) return n/2;
    else return 3*n + 1;
}

int maximum_collatz(int n0)
{
    int mx=n0;
    while (n0 > 1){
      n0 = next_collatz_term(n0);
      if (n0 > mx){
        mx=n0;
      }

    }
    return mx;
}