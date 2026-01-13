
#pragma once

#include <iostream>
#include <cmath>
#include <string>



namespace engine
{
	class Engine
	{
	private:
		std::string name;
		double RotationPerSecondSpeeed;
		double Voltage;
		double Ampers; //сила струму
	public:
		Engine(const std::string& name_, const double& RotationPerSecondSpeeed_, const double& Voltage_, const double& Ampers_)
			:name(name_), RotationPerSecondSpeeed(RotationPerSecondSpeeed_), Voltage(Voltage_), Ampers(Ampers_)
		{}
		~Engine() 
		{}

		const std::string& get_name() const { return this->name; }

		const std::string& set_name()
		{
			this->name = name;
		}

		const double& get_RotationPerSecondSpeed() { return this->RotationPerSecondSpeeed; }

		const double& set_RotationPerSecondSpeed() 
		{
			this->RotationPerSecondSpeeed = RotationPerSecondSpeeed;
		}

		const double& get_Voltage() { return this->Voltage; }
		
		const double& set_Voltage()
		{
			this->Voltage = Voltage;
		}

		const double& get_Ampers() { return this->Ampers; }

		const double& set_Ampers()
		{
			this->Ampers = Ampers;
		}

		void RotationForvard()
		{
		//х** знає як реалізувати
		}

		void RotationBackward()
		{
		//х** знає як реалізувати
		}
	};
}