#include <stdio.h>
#include <math.h>
// Function to check if a number is prime
int isPrime(int num) {
if (num <= 1) return 0; // Numbers less than 2 are not prime
for (int i = 2; i <= sqrt(num); i++) {
if (num % i == 0) {
return 0; // Not prime
}
}
return 1; // Prime
}
int main() {
int N;
printf("Enter the upper limit N: ");
scanf("%d", &N);
printf("Prime numbers from 2 to %d are:\n", N);
for (int i = 2; i <= N; i++) {
if (isPrime(i)) {
printf("%d ", i); // Print the prime number
}
}
printf("\n");
return 0;
}
