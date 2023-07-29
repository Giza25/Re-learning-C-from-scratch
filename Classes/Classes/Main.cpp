#include <iostream>

class Player
{
public:
	int x, y, z = 0;
	int speedX, speedY, speedZ = 1;

	void Move(int xa, int ya, int za)
	{
		x += xa * speedX;
		y += ya * speedY;
		z += za * speedZ;
	}
};

int main()
{
	Player player1;
	player1.Move(1, 0, 3);
}