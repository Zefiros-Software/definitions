#include <nlohmann/json.hpp>
#include <iostream>

using json = nlohmann::json;

int main() {
    std::cout << json({ {"theMeaningOfLife", 42} }).dump();
    return json({ {"theMeaningOfLife", 42} }).dump() == std::string("{\"theMeaningOfLife\":42}") ? 0 : -1;
}