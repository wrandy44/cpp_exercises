#include "Encryption.h"
#include "Cesar.h"
#include "OneTime.h"
#include <string>
#include <iostream>

int main(){
    Cesar c;
    OneTime o("DedeATraversLesBrumes");
    OneTime t("TheCakeIsALie");
    Encryption::encryptString(c, "Je clair Luc, ne pas ? Ze woudrai un kekos !");
    Encryption::decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
    Encryption::encryptString(c, "KIKOO");
    Encryption::encryptString(c, "LULZ XD");
    Encryption::decryptString(c, "Ziqivun ea Ndcsg.Wji !");
    Encryption::encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
    Encryption::encryptString(o, "De la musique et du bruit !");
    Encryption::encryptString(t, "Kion li faras? Li studas kaj programas!");
    Encryption::decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg!");
    Encryption::decryptString(o, "Gi pa dunmhmp wu xg tuylx !");
    Encryption::decryptString(t, "Dpsp vm xaciw? Pk cxcvad otq rrykzsmla!");
    return 0;
}
