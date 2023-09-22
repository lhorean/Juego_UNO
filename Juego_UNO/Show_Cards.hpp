#pragma once

class Show_Cards
{ 
public:
	
		Show_Cards()
		{
		}

		enum class Color
		{
			green, yellow, red, blue
		};

		enum class Type
		{
			color_change, number, reverse, take_two, take_four, jump
		};

		Show_Cards(Color color, Type type, int number = -1);

private:

		Color color;
		Type type;
		int number = -1;
};
