#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "calculator.hpp"

TEST_CASE("Calculator operations", "[calculator]") {
    Calculator calc;
    
    SECTION("Addition") {
        REQUIRE(calc.add(2, 2) == 4);
        REQUIRE(calc.add(-1, 1) == 0);
    }
    
    SECTION("Subtraction") {
        REQUIRE(calc.subtract(2, 2) == 0);
        REQUIRE(calc.subtract(5, 3) == 2);
    }
    
    SECTION("Multiplication") {
        REQUIRE(calc.multiply(2, 3) == 6);
        REQUIRE(calc.multiply(-2, 3) == -6);
    }
    
    SECTION("Division") {
        REQUIRE(calc.divide(6, 2) == 3);
        REQUIRE(calc.divide(5, 2) == 2.5);
        REQUIRE_THROWS_AS(calc.divide(1, 0), std::invalid_argument);
    }
}