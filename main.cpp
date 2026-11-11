#include <iostream>

int main() {
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Ali added this line!" << std::endl;
  std::cout << "Ali added another line" << std::endl;
  std::cout << "I addded this line" << std::endl;

  for (int i = 0; i < 5; i++) {
    std::cout << "This is line number: " << i + 1 << std::endl;
  }

  int count{};

  while (true) {
    std::cout << "This is an infinite loop!" << std::endl;
    count++;
    if (count == 5) {
      break;
    }
  }

  if (true) {
    std::cout << "This is an if statement!" << std::endl;
  } else {
    std::cout << "This is an else statement!" << std::endl;
  }

  switch (count) {
  case 1:
    std::cout << "Count is 1" << std::endl;
    break;
  case 2:
    std::cout << "Count is 2" << std::endl;
    break;
  case 3:
    std::cout << "Count is 3" << std::endl;
    break;
  case 4:
    std::cout << "Count is 4" << std::endl;
    break;
  case 5:
    std::cout << "Count is 5" << std::endl;
    break;
  default:
    std::cout << "Count is not between 1 and 5" << std::endl;
    break;
  }
  return 0;
}
