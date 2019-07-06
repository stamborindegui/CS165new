#include "bullet.h"

Bullet::Bullet()
{
   setVelSpeed(10);
   setWrapable();
   setLives(60);
}

Bullet::~Bullet()
{
}

void Bullet::draw()
{
   drawDot(getPoint());
}
