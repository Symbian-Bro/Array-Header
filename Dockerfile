FROM gcc:13

WORKDIR /app
COPY . .

RUN echo '#include "arrayheader.h"' > test.cpp && \
    echo 'int main() {' >> test.cpp && \
    echo '  int arr[5] = {5,4,3,2,1};' >> test.cpp && \
    echo '  selection_sort(5, arr);' >> test.cpp && \
    echo '  for(int i=0;i<5;i++) std::cout << arr[i] << " ";' >> test.cpp && \
    echo '  std::cout << std::endl;' >> test.cpp && \
    echo '  int idx = selection(5, arr, 3, 2);' >> test.cpp && \
    echo '  std::cout << "Index of 3: " << idx << std::endl;' >> test.cpp && \
    echo '  return 0;' >> test.cpp && \
    echo '}' >> test.cpp

RUN g++ -std=c++17 -o test test.cpp

CMD ["./test"]

