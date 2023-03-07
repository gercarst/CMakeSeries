#include <iostream>
#include "include/dog.h"
#include "include/operations.h"
#include "include/log.h"

int main()
{
    double result = add(10, 70);
    std::cout << "Result: " << result << std::endl;

    Dog dog1{ "Pamelin" };
    dog1.print_info();

    log_data("Hello there", LogType::FATAL_ERROR);

    return 0;
}