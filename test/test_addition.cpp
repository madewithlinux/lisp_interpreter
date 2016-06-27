// (c) Copyright 2015 Josh Wright

#include <iostream>
#include "../src/function_matcher.h"

int main(int argc, char const *argv[]) {

    base_function *func = function_matcher.get_function("add", {T_INT, T_INT});
    type_instance arg1(T_INT, (const void *) 1);
    type_instance arg2(T_INT, (const void *) 2);
    type_instance *result = func->apply(std::vector<const type_instance *>{&arg1, &arg2});

    if (result->data != (void *) 3) {
        std::cout << "error" << std::endl;
    } else {
        std::cout << "it worked!" << std::endl;
    }

    return 0;
}
