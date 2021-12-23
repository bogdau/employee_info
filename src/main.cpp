#include "Program_runner.h"
#include <iostream>
#include <memory>


int main() {
    auto runner = std::make_unique<Program_runner>();
    runner->start();
}
