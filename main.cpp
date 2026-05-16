#include <iostream>
#include <Foco.hpp>
#include<Seriesfocos.hpp>
int main (int argc, char const *argv[])
{

SerieFocos serie;
serie.EncenderFocos();
serie.MostrarFocos();
serie.ApagarFocos();
serie.MostrarFocos();

return 0;
}