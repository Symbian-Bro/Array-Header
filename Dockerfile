FROM gcc:13

WORKDIR /app
COPY . .

RUN echo '#include "arrayheader.h" \
#include <iostream> \
int main() { \
  int arr[5] = {5,4,3,2,1}; \
  selection_sort(5, arr); \
  for(int i=0;i<5;i++) std::cout << arr[i] << " "; \
  std::cout << std::endl; \
  int idx = selection(5, arr, 3, 2); \
  std::cout << "Index of 3: " << idx << std::endl; \
  return 0; \
}' > test.cpp

RUN g++ -std=c++17 -o test test.cpp

CMD ["./test"]
