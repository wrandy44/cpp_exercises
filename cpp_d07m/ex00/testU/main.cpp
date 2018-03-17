/* File : main.cpp 
** For project : zad
** Made at Tue Jan 10 10:53:10 CET 2017
// Last update Tue Jan 10 11:18:35 2017 Carl DEBRAUWERE
**
** by : ╔═╗┌─┐┬─┐┬    ╔╦╗┌─┐┌┐ ┬─┐┌─┐┬ ┬┬ ┬┌─┐┬─┐┌─┐
**	║  ├─┤├┬┘│     ║║├┤ ├┴┐├┬┘├─┤│ ││││├┤ ├┬┘├┤ 
**	╚═╝┴ ┴┴└─┴─┘  ═╩╝└─┘└─┘┴└─┴ ┴└─┘└┴┘└─┘┴└─└─┘
*/

#include "Federation.hh"
#include "WarpSystem.hh"


int main(void)
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    Federation::Ship Independant(150, 230, "Greok");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);

    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    Independant.setupCore(&core2);
    Independant.checkCore();
    QR.setStability(false);
    QR2.setStability(false);
    UssKreog.checkCore();
    Independant.checkCore();
    return 0;
}
