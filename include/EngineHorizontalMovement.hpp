#pragma once

#include <iostream>
#include <cmath>

namespace engiehorizontalmovement
{
	class EngineHorizontalMovement
	{
	private:
		
		double RotationPerAngleSpeed;
		int x;
		int x_min = -90;
		int x_max = 90;

	public:
		EngineHorizontalMovement(const double& rotationPerAngleSpeed_, const int& x_, const int& x_max_, const int& x_min_)
			: RotationPerAngleSpeed(rotationPerAngleSpeed_), x(x_), x_min(x_min_), x_max(x_max_)

		{
		}
		~EngineHorizontalMovement()

		{}

		const double& get_RotationPerAngleSpeed() const { return this->RotationPerAngleSpeed; };

		const double& set_RotationPerAngleSpeed(const double& RotationPerAngleSpeed)
		{
			this->RotationPerAngleSpeed = RotationPerAngleSpeed;
		}

		void Xcheaker()
		{
			if (x_min < -90 && x_max > 90)
			{
				std::cout << "X is out of the valid range!" << std::endl;
			}

		};


		void Graber()
		{
			//х** знає як реалізувати
		};

		void Move()
		{	
		//допилиться
		};

	};

}