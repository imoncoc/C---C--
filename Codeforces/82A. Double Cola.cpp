#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
   string queue[] = { "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

// Find the number of people in the queue by doubling until it is greater than n
int num_people = 1;
while (num_people * 5 < n)
{
    n -= num_people * 5;
    num_people *= 2;
}

// Find the index of the person in the queue by dividing n by the number of people
int index = (n - 1) / num_people;

// Print the name of the person who will drink the n-th can of cola
std::cout << queue[index] << std::endl;

return 0;


    return 0;
}

