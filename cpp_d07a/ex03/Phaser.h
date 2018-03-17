/*
** Phaser.h for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan 11 01:42:20 2017 Carl DEBRAUWERE
** Last update Wed Jan 11 03:03:36 2017 Carl DEBRAUWERE
*/

#ifndef PHASER_H
# define PHASER_H

class Phaser{
 public:
    enum AmmoType
    {REGULAR, PLASMA, ROCKET};
 public:
    Phaser(int maxAmmo = 20, AmmoType type = REGULAR);
    ~Phaser(){};
    public:
    void fire();
    void ejectClip();
    void changeType(AmmoType newType);
    void reload();
    void addAmmo(AmmoType type);
 public:
    int getCurrentAmmos() const;
 private:
    static const int Empty = 0;
 private:
    //    int _total;
    int _maxAmmo;
    int _magazine[3];
    AmmoType _cur;
};
#endif /* PHASER */
