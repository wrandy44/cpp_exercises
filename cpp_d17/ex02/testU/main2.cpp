#include "Cesar.h"
#include "OneTime.h"
#include <string>
#include <iostream>
static void encryptString(IEncryptionMethod& encryptionMethod,
std::string const& toEncrypt)
{
  size_t len = toEncrypt.size();
  encryptionMethod.reset();
  for (size_t i = 0; i < len; ++i)
  {
    encryptionMethod.encryptChar(toEncrypt[i]);
  }
  std::cout << std::endl;
}
static void decryptString(IEncryptionMethod& encryptionMethod,
std::string const& toDecrypt)
{
  size_t len = toDecrypt.size();
  encryptionMethod.reset();
  for (size_t i = 0; i < len; ++i)
  {
    encryptionMethod.decryptChar(toDecrypt[i]);
  }
  std::cout << std::endl;
}
int main()
{
  Cesar c;
  OneTime o("DedeATraversLesBrumes");
  OneTime t("TheCakeIsALie");
  encryptString(c, "Je clair Luc, ne pas ? Ze woudrai un kekos !");
  decryptString(c, "Mi isirb Xhq, ew jvo ? Zf zszjyir fz ytafk !");
  encryptString(c, "KIKOO");
  encryptString(c, "LULZ XD");
  decryptString(c, "Ziqivun ea Ndcsg.Wji !");
  encryptString(t, "Prend garde Lion, ne te trompes pas de voie !");
  encryptString(o, "De la musique et du bruit !");
  encryptString(t, "Kion li faras? Li studas kaj programas!");
  decryptString(t, "Iyipd kijdp Pbvr, xi le bvhttgs tik om ovmg !");
  decryptString(o, "Gi pa dunmhmp wu xg tuylx !");
  decryptString(t, "Dpsp vm xaciw? Pk cxcvad otq rrykzsmla!");
  return 0;
}
