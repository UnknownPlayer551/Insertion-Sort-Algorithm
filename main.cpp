#include <iostream>

// for more information about information about templates
// please check https://en.m.wikipedia.org/wiki/Template_(C%2B%2B)
template<typename T>

// function definition
void insertion_sort(T arr[], const size_t size) {
  // Taking 2nd items of an array of T
  for(size_t j = 1; j < size; j = j + 1) {

    // taking one item from arr[j] and save it to key variable
    const T key = arr[j];
    
    // initializing a copy index of j to variable called 'i'
    size_t i = j;

    while(i > 0 && arr[i - 1] > key) {
      // inserting arr[i - 1] to arr[i]

      arr[i] = arr[i - 1];

      // decrementing variable i by 1

      i = i - 1;
    }
    // assigning arr[i] to key

    arr[i] = key;
  }
}

// defining an array printer function
template<typename T>
void print_arr(const T arr[], const size_t size) {
  for(size_t i = 0; i < size; i++) {
    std::cout << " [" << arr[i] << "] ";
  }
  std::cout << '\n';
}

// use cases
int main(int argc, char* argv[]) {
  // defining an array length
  const size_t arr_len = 6;

  // declaring an integer array
  int data1[arr_len] = {3, 4, 6, 2, 1, 5};

  // printing an array
  print_arr<int>(data1, arr_len);

  // sorting them using insertion_sort function
  insertion_sort<int>(data1, arr_len);

  // printing an array again
  print_arr<int>(data1, arr_len);

  // its also works on 'double' data type
  double data2[arr_len] = {2.0, 5.0, 3.0, 6.0, 1.0, 4.0};

  std::cout << '\n';
  print_arr<double>(data2, arr_len);
  insertion_sort<double>(data2, arr_len);
  print_arr<double>(data2, arr_len);

  // and 'char' as well
  char data3[arr_len] = {'B', 'A', 'D', 'C', 'F', 'E'};

  std::cout << '\n';
  print_arr<char>(data3, arr_len);
  insertion_sort<char>(data3, arr_len);
  print_arr<char>(data3, arr_len);

  return 0;
}

// That's all :D
