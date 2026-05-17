#include <cinttypes>
#include <iostream>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  
  std::string a_string = std::to_string(a);
  
  sort(a_string.begin(),a_string.end());
  reverse(a_string.begin(), a_string.end());
  
  return std::stoull(a_string);
}

int main(){
    uint64_t a = 50283;
    uint64_t result = descendingOrder(a);
    std::cout << result << std::endl;
}