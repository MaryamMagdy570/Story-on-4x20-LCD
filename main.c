/*
 * main.c
 *
 *  Created on: Oct 25, 2023
 *      Author: Maryam Magdy
 */

#include <util/delay.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "CLCD_interface.h"


void ZaghloolStory();

void main(void)
{
	DIO_voidInit();
	CLCD_voidInit();

	ZaghloolStory();
}

void ZaghloolStory()
{

	u8 Person1[8]={0b00001110,0b00001110,0b00000100,0b00001110,0b00010101,0b00000100,0b00001010};	// normal
	u8 Person2[8]={0b00011100,0b00011100,0b00001000,0b00001110,0b00001000,0b00001100,0b00001010};	// run
	u8 Person3[8]={0b00001110,0b00001110,0b00000100,0b00011111,0b00000100,0b00001010,0b00001010}; //death
	u8 DDD[8]={0b00000000,0b00000000,0b00000000,0b00000000,0b00001000,0b00011110,0b00011111}; //death
	u8 film[8]=  {0b00000000,0b00000000,0b00001110,0b00001110,0b00001110,0b00000000,0b00000000};
	u8 stairs[8]={0b00010001,0b00011111,0b00010001,0b00011111,0b00010001,0b00011111,0b00010001};
	u8 Zo7leqa1[8]={0b00010000,0b00001100,0b00000011,0b00000000,0b00000000,0b00000000,0b00000000};
	u8 Zo7leqa2[8]={0b00000000,0b00000000,0b00000000,0b00001100,0b00000011,0b00000000,0b00000000};
	u8 Zo7leqa3[8]={0b00000000,0b00000000,0b00000000,0b00000000,0b00000000,0b00001100,0b00000011};
	u8 Zo7leqaPerson[8]={0b00000000,0b00011000,0b00011001,0b00010010,0b00011100,0b00001110,0b00000111};
	u8 brick[8]={0b00011111,0b00011111,0b00011111,0b00011111,0b00011111,0b00011111,0b00011111};
	u8 EVIL[8]={0b00000000,0b00000100,0b00001010,0b00010101,0b00001010,0b00000100,0b00000000};
	CLCD_voidSendSpecialCharacter(Person1,0);
	CLCD_voidSendSpecialCharacter(film,1);
	CLCD_voidSendSpecialCharacter(stairs,2);
	CLCD_voidSendSpecialCharacter(brick,3);
	CLCD_voidSendSpecialCharacter(Zo7leqa1,4);
	CLCD_voidSendSpecialCharacter(Zo7leqa2,5);
	CLCD_voidSendSpecialCharacter(Zo7leqa3,6);
	CLCD_voidSendSpecialCharacter(Zo7leqaPerson,7);

	u8 r=1,c=10;
	for (u8 i =3; i>0; i--)
	{
		CLCD_voidGoToRowColumn(r,c);
		CLCD_voidSendInteger(i);

		CLCD_voidDisplaySpecialCharacter(1,0,9);
		CLCD_voidDisplaySpecialCharacter(1,2,11);
		_delay_ms(150);
		CLCD_voidDisplaySpecialCharacter(1,0,10);
		CLCD_voidDisplaySpecialCharacter(1,2,10);
		_delay_ms(150);
		CLCD_voidDisplaySpecialCharacter(1,0,11);
		CLCD_voidDisplaySpecialCharacter(1,2,9);
		_delay_ms(150);
		CLCD_voidDisplaySpecialCharacter(1,1,11);
		CLCD_voidDisplaySpecialCharacter(1,1,9);
		_delay_ms(150);
		CLCD_voidDisplaySpecialCharacter(1,2,11);
		CLCD_voidDisplaySpecialCharacter(1,0,9);
		_delay_ms(150);

		CLCD_voidClearDisplay();
	}

    CLCD_voidClearDisplay();

    CLCD_voidGoToRowColumn(0,0);
    CLCD_voidSendString("This is Zaghlool");
    CLCD_voidDisplaySpecialCharacter(0,1,9);
    _delay_ms(1000);
    CLCD_voidGoToRowColumn(2,0);
    CLCD_voidSendString("He will tell us");
    CLCD_voidGoToRowColumn(3,0);
    CLCD_voidSendString("his story.");
    _delay_ms(2000);

    CLCD_voidClearDisplay();

    CLCD_voidGoToRowColumn(0,0);
    CLCD_voidSendString("Let me show you  ");
    CLCD_voidGoToRowColumn(1,0);
    CLCD_voidSendString("a short video .. ");
    _delay_ms(2000);

    CLCD_voidClearDisplay();

    CLCD_voidGoToRowColumn(0,0);
    CLCD_voidSendString("when I was a kid ..");
    _delay_ms(700);
    CLCD_voidGoToRowColumn(1,0);
    CLCD_voidSendString("I was happy ..");
    _delay_ms(700);
    CLCD_voidGoToRowColumn(2,0);
    CLCD_voidSendString("I had activities ..");
    _delay_ms(1000);

    CLCD_voidClearDisplay();

	CLCD_voidDisplaySpecialCharacter(2,3,1);
	CLCD_voidDisplaySpecialCharacter(2,2,1);
	CLCD_voidDisplaySpecialCharacter(2,1,1);


    CLCD_voidDisplaySpecialCharacter(4,1,2);
    CLCD_voidDisplaySpecialCharacter(5,1,3);
    CLCD_voidDisplaySpecialCharacter(6,1,4);
    CLCD_voidDisplaySpecialCharacter(4,2,5);
	CLCD_voidDisplaySpecialCharacter(5,2,6);
	CLCD_voidDisplaySpecialCharacter(6,2,7);
	CLCD_voidDisplaySpecialCharacter(4,3,8);
	CLCD_voidDisplaySpecialCharacter(5,3,9);
	CLCD_voidDisplaySpecialCharacter(6,3,10);


	CLCD_voidDisplaySpecialCharacter(0,3,0);
	_delay_ms(200);
	CLCD_voidDisplaySpecialCharacter(0,2,0);
	CLCD_voidGoToRowColumn(3,0);
	CLCD_voidSendData(' ');
	_delay_ms(200);
	CLCD_voidDisplaySpecialCharacter(0,1,0);
	CLCD_voidGoToRowColumn(2,0);
	CLCD_voidSendData(' ');
	_delay_ms(200);
	CLCD_voidDisplaySpecialCharacter(0,0,0);
	CLCD_voidGoToRowColumn(1,0);
	CLCD_voidSendData(' ');
	_delay_ms(200);
	CLCD_voidDisplaySpecialCharacter(0,0,1);
	CLCD_voidGoToRowColumn(0,0);
	CLCD_voidSendData(' ');
	_delay_ms(200);
	CLCD_voidDisplaySpecialCharacter(7,0,2);
	CLCD_voidGoToRowColumn(0,1);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,0,3);
	CLCD_voidGoToRowColumn(0,2);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,0,4);
	CLCD_voidGoToRowColumn(0,3);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,1,5);
	CLCD_voidGoToRowColumn(0,4);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,1,6);
	CLCD_voidGoToRowColumn(1,5);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,1,7);
	CLCD_voidGoToRowColumn(1,6);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,2,8);
	CLCD_voidGoToRowColumn(1,7);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,2,9);
	CLCD_voidGoToRowColumn(2,8);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(7,2,10);
	CLCD_voidGoToRowColumn(2,9);
	CLCD_voidSendData(' ');
	_delay_ms(150);
	CLCD_voidDisplaySpecialCharacter(0,3,11);
	CLCD_voidGoToRowColumn(2,10);
	CLCD_voidSendData(' ');
	_delay_ms(2000);


	CLCD_voidClearDisplay();


    CLCD_voidGoToRowColumn(0,0);
    CLCD_voidSendString("When I grew up,");
    _delay_ms(700);
    CLCD_voidGoToRowColumn(1,0);
    CLCD_voidSendString("I Joined EECE .. ");
    _delay_ms(700);
    CLCD_voidGoToRowColumn(2,0);
    CLCD_voidSendString("Here , ");
    _delay_ms(300);
    CLCD_voidGoToRowColumn(3,0);
    CLCD_voidSendString("The suffering began.");
    _delay_ms(1000);


    CLCD_voidClearDisplay();

	CLCD_voidSendSpecialCharacter(Person2,1);
	CLCD_voidSendSpecialCharacter(Person3,2);
	CLCD_voidSendSpecialCharacter(EVIL,4);
	CLCD_voidSendSpecialCharacter(DDD,5);



    CLCD_voidDisplaySpecialCharacter(0,1,9);
    _delay_ms(350);
    CLCD_voidDisplaySpecialCharacter(4,1,2);
    CLCD_voidGoToRowColumn(0,0);
    CLCD_voidSendString("Quiz");
    _delay_ms(350);
    CLCD_voidDisplaySpecialCharacter(4,2,13);
    CLCD_voidGoToRowColumn(1,13);
    CLCD_voidSendString("Project");
    _delay_ms(350);
    CLCD_voidDisplaySpecialCharacter(4,2,5);
    CLCD_voidGoToRowColumn(3,3);
    CLCD_voidSendString("tasks");
    _delay_ms(1000);

    CLCD_voidClearDisplay();


    CLCD_voidDisplaySpecialCharacter(0,2,15);
    for (u8 i=13; i<20; i++)
    {
    	CLCD_voidDisplaySpecialCharacter(3,3,i);
    }
    for (u8 i=0;i<6; i++){
    CLCD_voidGoToRowColumn(1,i);
    CLCD_voidSendData(' ');
    CLCD_voidGoToRowColumn(2,i);
    CLCD_voidSendData(' ');
    CLCD_voidDisplaySpecialCharacter(4,1,i+1);
    CLCD_voidDisplaySpecialCharacter(4,2,i+1);
    CLCD_voidDisplaySpecialCharacter(4,1,i+2);
    CLCD_voidDisplaySpecialCharacter(4,2,i+2);
    CLCD_voidDisplaySpecialCharacter(4,1,i+3);
    CLCD_voidDisplaySpecialCharacter(4,2,i+3);
    CLCD_voidDisplaySpecialCharacter(4,1,i+4);
    CLCD_voidDisplaySpecialCharacter(4,2,i+4);
    CLCD_voidDisplaySpecialCharacter(4,1,i+5);
    CLCD_voidDisplaySpecialCharacter(4,2,i+5);
    CLCD_voidDisplaySpecialCharacter(4,1,i+6);
    CLCD_voidDisplaySpecialCharacter(4,2,i+6);
    _delay_ms(150);
    }

    CLCD_voidDisplaySpecialCharacter(1,2,15);
    u8 pos=15;
    for (u8 i=6;i<10; i++)
    {
    CLCD_voidGoToRowColumn(1,i);
    CLCD_voidSendData(' ');
    CLCD_voidGoToRowColumn(2,i);
    CLCD_voidSendData(' ');
    CLCD_voidGoToRowColumn(2,pos++);
    CLCD_voidSendData(' ');

    CLCD_voidDisplaySpecialCharacter(1,2,pos);
    CLCD_voidDisplaySpecialCharacter(4,1,i+1);
    CLCD_voidDisplaySpecialCharacter(4,2,i+1);
    CLCD_voidDisplaySpecialCharacter(4,1,i+2);
    CLCD_voidDisplaySpecialCharacter(4,2,i+2);
    CLCD_voidDisplaySpecialCharacter(4,1,i+3);
    CLCD_voidDisplaySpecialCharacter(4,2,i+3);
    CLCD_voidDisplaySpecialCharacter(4,1,i+4);
    CLCD_voidDisplaySpecialCharacter(4,2,i+4);
    CLCD_voidDisplaySpecialCharacter(4,1,i+5);
    CLCD_voidDisplaySpecialCharacter(4,2,i+5);
    CLCD_voidDisplaySpecialCharacter(4,1,i+6);
    CLCD_voidDisplaySpecialCharacter(4,2,i+6);
    _delay_ms(100);
    }

    CLCD_voidClearDisplay();

    for (u8 r=1; r<=3; r++)
    	for(u8 c =0; c<8; c++)
    	{
    		CLCD_voidDisplaySpecialCharacter(3,r,c);
    	}



    CLCD_voidDisplaySpecialCharacter(1,0,0);

    for (u8 i=0;i<7; i++)
    {
    _delay_ms(100);
    CLCD_voidGoToRowColumn(0,i);
    CLCD_voidSendData(' ');
    CLCD_voidDisplaySpecialCharacter(1,0,i+1);
    }
    _delay_ms(100);
    CLCD_voidDisplaySpecialCharacter(0,0,7);
    _delay_ms(400);

    CLCD_voidDisplaySpecialCharacter(4,0,0);
    _delay_ms(150);
    CLCD_voidDisplaySpecialCharacter(1,0,7);
    _delay_ms(150);
    CLCD_voidDisplaySpecialCharacter(4,0,1);
    _delay_ms(150);
    CLCD_voidGoToRowColumn(0,7);
    CLCD_voidSendData(' ');
    CLCD_voidDisplaySpecialCharacter(2,0,8);
    for (u8 i=0;i<3; i++)
    {
    	 _delay_ms(100);
    	CLCD_voidGoToRowColumn(i,8);
        CLCD_voidSendData(' ');
		CLCD_voidDisplaySpecialCharacter(2,i+1,8);
    }
    _delay_ms(100);
    CLCD_voidDisplaySpecialCharacter(5,3,8);
    _delay_ms(500);

    CLCD_voidGoToRowColumn(0,14);
    CLCD_voidSendString("Short");
    CLCD_voidGoToRowColumn(1,15);
    CLCD_voidSendString("Sad");
    CLCD_voidGoToRowColumn(2,14);
    CLCD_voidSendString("Story");
    _delay_ms(2000);


}

