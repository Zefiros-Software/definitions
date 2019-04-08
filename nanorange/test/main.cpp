#include <nanorange.hpp>
#include <array>

auto sort_copy = [](auto rng) {
    nano::sort(rng);
    return rng;
};

int main()
{
    constexpr std::array<size_t, 5> a{5u, 4u, 3u, 2u, 1u};
    constexpr auto b = sort_copy(a);

    static_assert(nano::is_sorted(b));
}