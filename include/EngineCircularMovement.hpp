#pragma once

#include <iostream>
#include <cmath>
#include "AngleColculatorSpeed.hpp"

namespace engie�ircularlmovement
{
	class EngineCircularMovement
	{
	private:
		
		double RotationPerAngleSpeed;
		double z;
		

	public:
		EngineCircularMovement(const double& rotationPerAngleSpeed_, const double& z_)
			: RotationPerAngleSpeed(rotationPerAngleSpeed_), z(z_)

		{
		}
		~EngineCircularMovement()

		{}

		const double& get_RotationPerAngleSpeed() const { return this->RotationPerAngleSpeed; };
	
		const double& set_RotationPerAngleSpeed(const double& RotationPerAngleSpeed)
		{
			this->RotationPerAngleSpeed = RotationPerAngleSpeed;
		}


		void Graber()
		{
			//х** знає як реалізувати
		};

		void Rotate()
		{	
		//доробимо
		};

	};

}