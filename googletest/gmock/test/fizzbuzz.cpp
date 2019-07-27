// from https://coding-exercises.udemy.com/cpp.html
#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include <algorithm>
#include <numeric>
#include <vector>


std::vector<std::string> fizzbuzz(int n) {
    std::vector<int> range(n);
    std::iota(range.begin(), range.end(), 1);

    std::vector<std::string> values;
    values.resize(range.size());

    auto fizzbuzz = [](int i) -> std::string {
        if ((i%15) == 0) return "FizzBuzz";
        if ((i%5) == 0)  return "Buzz";
        if ((i%3) == 0)  return "Fizz";
        return std::to_string(i);
    };

    std::transform(range.begin(), range.end(), values.begin(), fizzbuzz);

    return values;
}

class TestFizzBuzz : public ::testing::Test {
};

TEST_F(TestFizzBuzz, One) {
    std::vector<std::string> result = fizzbuzz(1);
    ASSERT_THAT(result, testing::ElementsAre("1"));
}

TEST_F(TestFizzBuzz, Fifteen) {
    std::vector<std::string> result = fizzbuzz(15);
    ASSERT_THAT(result, testing::ElementsAreArray({
        "1", "2", "Fizz", "4", "Buzz",
        "Fizz", "7", "8", "Fizz", "Buzz",
        "11", "Fizz", "13", "14", "FizzBuzz"
    }));
}