#include <iostream>
#include <cstdlib>

int number_of_divisors(int n); // counts the number of divisors of a given number

int main(int argc, char **argv)
{
  const int NDMAX = std::atoi(argv[1]);
  int sum = 0;
  for (int ii = 1;number_of_divisors(sum) <= NDMAX ;++ii ) {
      sum=(sum+ii);
  }
  
  std::cout << sum << " -> " << number_of_divisors(sum) << "\n";
  return 0;
}

int number_of_divisors(int n){
  if (n == 0){
    return 0;
  }
 int c=0;
for (int a=1; a <= n; ++a){
  if (n % a == 0){
    c++;
  }
}
  return c;
}
