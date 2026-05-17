#include <iostream>
using namespace std;

int solution(int number) 
{
  if (number < 3){
    return 0;
  }
  
  int sum = 0;
  
  for(int i = 0; i < number; ++i){
    if (i % 3 == 0 || i % 5 == 0){
      sum += i;
    }
  }
  
  return sum;
}

int main() {
    int number = 10;
    int result = solution(number);
    cout << result << endl;
}