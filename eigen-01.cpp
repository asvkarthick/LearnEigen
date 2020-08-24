#include <Eigen/Dense>
#include <iostream>

int main(void)
{
    Eigen::Matrix3d m1;
    Eigen::Matrix3d m2;

    m1 << 1, 2, 3,
          4, 5, 6,
          7, 8, 9;
    m2 << 9, 8, 7,
          6, 5, 4,
          3, 2, 1;
    Eigen::Matrix3d m3 = m1 + m2;

    std::cout << m1 << std::endl;
    std::cout << m2 << std::endl;
    std::cout << m3 << std::endl;

    return 0;
}
