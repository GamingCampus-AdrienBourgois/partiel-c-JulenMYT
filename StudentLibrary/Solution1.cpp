#include "Solution1.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_1

float Solution1::ConvertTemperature(float _value, TemperatureUnits _from, TemperatureUnits _to)
{
	float _newvalue;
	if (_from == TemperatureUnits::CELSIUS)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			_newvalue = _value;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_newvalue = _value * (9 / 5) + 32;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			_newvalue = _value + 273.15;
		}
		return _newvalue;
	}
	if (_from == TemperatureUnits::KELVIN)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			_newvalue = _value - 273.15;
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_newvalue = (_value - 273.15) * (9 / 5) + 32;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			_newvalue = _value;
		}
		return _newvalue;
	}
	if (_from == TemperatureUnits::FAHRENHEIT)
	{
		if (_to == TemperatureUnits::CELSIUS)
		{
			_newvalue = (_value - 32) * (5 / 9);
		}
		else if (_to == TemperatureUnits::FAHRENHEIT)
		{
			_newvalue = _value;
		}
		else if (_to == TemperatureUnits::KELVIN)
		{
			_newvalue = (_value - 32) * (5 / 9) + 273.15;
		}
		return _newvalue;
	}
	return -1.0f;
}

#endif
