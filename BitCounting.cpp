unsigned int countBits(unsigned long long n){
  int x = 0;
  while (n != 0) {
    if (n % 2 != 0) {
      x += 1;
    }
    n = n / 2;
  }
  return x; //your code here
}