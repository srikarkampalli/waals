#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace constants{
    inline constexpr double pi = 3.14159265358979323846; // pi
    inline constexpr double e = 2.71828182845904523536; // euler's number

    inline constexpr double kb = 1.380649e-23; // boltzmann constant
    inline constexpr double c = 2.998e8; // speed of light

    inline constexpr double g = 6.6743e-11; // gravitational constant
    inline constexpr double h = 6.62607015e-34; // planck constant
    inline constexpr double e0 = 8.85418782e-12; // permittivity of free space

    inline constexpr double mu0 = 4e-7 * constants::pi; // permeability of free space
    inline constexpr double R = 8.314462618; // ideal gas constant

    inline constexpr double k = 1 / (4*pi*e0); // coulomb constant
    inline constexpr double amu = 1.6605e-27; // amu to kg
}

#endif