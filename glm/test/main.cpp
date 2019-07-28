#include <glm/gtc/matrix_access.hpp>
#include <glm/mat2x2.hpp>

int main(int argc, char **argv)
{
    int Error = 0;
    glm::mat2x2 m(1);

    m = glm::row(m, 0, glm::vec2(0,  1));
    m = glm::row(m, 1, glm::vec2(4,  5));

    Error += glm::row(m, 0) == glm::vec2(0,  1) ? 0 : 1;
    Error += glm::row(m, 1) == glm::vec2(4, 5) ? 0 : 1;

    return 0;
}