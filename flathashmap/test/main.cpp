#include <flat_hash_map.hpp>

int main()
{
    ska::flat_hash_map<int, int> vec{ {0, 0} };

    return vec[0];
}