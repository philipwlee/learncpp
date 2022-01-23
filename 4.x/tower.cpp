#include <iostream>

#define NODEBUG

int main()
{
	constexpr double gravity{ 9.8 };
	double tower_height{}, ball_height{};
	int time{0};
	bool grounded{ false };

	std::cout << "Enter the height of the tower in meters: ";
	std::cin  >> tower_height;
	ball_height = tower_height;

	if (tower_height <= 0.0)
	{
		std::cout << "The ball is already on the ground. This is not interesting.\n";
		return 1;
	}

	while (!grounded)
	{
		std::cout << "At " << time << " seconds, the ball is at height: " << ball_height << " meters \n";
		time++;
		ball_height = tower_height - gravity * time * time / 2;
		grounded = ball_height <= 0.0;
#ifdef DEBUG
		std::cout << "ball " <<  ball_height << " time " << time << '\n';
#endif
	}

	std::cout << "At " << time << " seconds, the ball is on the ground.\n";
	return 0;
}
