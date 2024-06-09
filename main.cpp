//////////////////////////////////////
///                  VECTOR                 ///
//////////////////////////////////////

//////////////////////////////////////
///Includes 27 quotes from the most  ///
///inspirational character in all of  ///
///cinema.                                 ///
//////////////////////////////////////

//////////////////////////////////////
///Because daily Vector quotes keeps ///
///the doctor away.                       ///
//////////////////////////////////////

//////////////////////////////////////
///This is my magnum opus. I regret   ///
///nothing. I am a genius.               ///
//////////////////////////////////////

//////////////////////////////////////
///Alright, now it's time for some     ///
///Vector facts.                          ///
/////////////////////////////////////

/////////////////////////////////////
///VECTOR FACT : Vector is voiced by ///
///Jason Segel.                           ///
/////////////////////////////////////

//////////////////////////////////////
///VECTOR FACT : Vector is              ///
///left-handed.                           ///
/////////////////////////////////////

/////////////////////////////////////
///VECTOR FACT : Vector is based on ///
///Bill Gates.                            ///
////////////////////////////////////

////////////////////////////////////
///VECTOR FACT : Vector was under- ///
///charged for the cookies.          ///
////////////////////////////////////

//std
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector> //Oh Yeaahh!!!

int Random_Number();
std::string Catchphrase();

int main(void)
{
    std::cout << std::endl; //We've got to center the phrases. It looks nicer.
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
	std::cout << Catchphrase() << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
	return 0;
}

int Random_Number()
{
    srand(time(NULL));
	int result = rand() % 27 + 1;
	return result;
}

std::string Catchphrase()
{
	switch(Random_Number())
	{
	case 1:
	return "VECTOR!";
	break;
	case 2:
	return "Oh YEEAHH!";
	break;
	case 3:
	return "Oh YEESSS!";
	break;
	case 4:
	return "Pirahna gun!";      //Oh YEEEESS!!!
	break;
	case 5:
	return "Squid launcher!";       //Oh YEEEEAAAH!!!
	break;
	case 6:
	return "Victor was my nerd name. Now, my name is VECTOR!";
	break;
	case 7:
	return "H-he punched my SHARK!";    //One of my favorites.
	break;
	case 8:
    return "Oh poop.";
	break;
	case 9:
	return "These are not pajamas. It's my warm-up suit.";
	break;
	case 10:
    return "THEY ARE NOT PAJAMAS!";
	break;
	case 11:
	return "Zip it, happy meal.";
	break;
	case 12:
	return "Name one person that has ordered as many cookies as me.";
	break;
	case 13:
	return "BOOYA!";
	break;
	case 14:
	return "Now maybe you'll think twice before you FREEZE SOMEONE'S HEAD!";    //My personal favorite.
	break;
	case 15:
	return "I'm committing crimes -- with both direction -- and -- MAGNATUDE!!!";
	break;
	case 16:
	return "...super cool stuff you wouldn't understand.";
	break;
	case 17:
	return "-It's a mathematical term -- a quantity represented by an arrow with both direction and magnatude. ";
	break;
	case 18:
	return "Oh... a teeny-tiny toilet.";
	break;
	case 19:
	return "Take THAT!!!";
	break;
	case 20:
	return "Hey Gru, try this on for SIZE!";
	break;
	case 21:
	return "Oh... adorable.";
	break;
	case 22:
	return "Curse you TINY TOILET!!!";
	break;
	case 23:
	return "Get SHRUNK tiny mouthwash!";
	break;
	case 24:
	return "You've done been shrunk!";
	break;
	case 25:
	return "Welcome back to the Fortress of Vectortude.";
	break;
	case 26:
	return "You just got VECTORED!"; //OOOOHHHH YEEEEAAAHHH!!!!
	break;
	case 27:
	return "UNPREDICTABLE!";
	break;
	}
} // End of Vector Quotes ;(
