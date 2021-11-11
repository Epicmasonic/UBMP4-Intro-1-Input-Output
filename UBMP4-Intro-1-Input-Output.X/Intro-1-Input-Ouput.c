/*==============================================================================
 Project: Intro-1-Input-Output
 Date:    May 16, 2021
 
 This example UBMP4 input and output program demonstrates pushbutton input, LED
 (bit) output, port latch (byte) output, time delay functions, and simple 'if'
 condition structures.
 
 Additional program analysis and programming activities demonstrate byte output,
 logical condition operators AND and OR, using delay functions to create sound,
 and simulated start-stop button functionality.
==============================================================================*/

#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions

#include    "UBMP4.h"           // Include UBMP4 constants and functions

// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.

// The main function is required, and the program begins executing from here.

// FUNCTION abomanation starts here

        void Rest(char Length) {
            while(Length != 0) {
                __delay_us(2272);
                Length--;
            }
        }

	void NoteCustom(char Pitch, char Length, bool Slur) {
            Length = Length-(Slur*25);
	    char SlurPitch = Pitch*25;
            while(Length != 0) {
                BEEPER = !BEEPER;
		while(Pitch != 0) {
                	__delay_us(1);
			Pitch--;
	    	}
                Length--;
            }
            if (Slur == 0) {
		while(SlurPitch != 0) {
                	__delay_us(1) // The other delay times 25
			SlurPitch--;
	    	}
            }
        }

    // Pitch is the period of the wave in microseconds
    // Length is measured in 100ths of 16th notes
    // Slur has to be set to 1 for the last note of a slur (and for non-slurs)

    // Non-sharps
        void NoteF3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(5727);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(143175); // The other delay times 25
            }
        }

        void NoteG3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(5102);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(127550); // The other delay times 25
            }
        }

        void NoteA3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(4545);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(113625); // The other delay times 25
            }
        }

        void NoteB3(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(4049);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(101225); // The other delay times 25
            }
        }
        
        void NoteC4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3822);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(95550); // The other delay times 25
            }
        }

        void NoteD4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3405);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(85125); // The other delay times 25
            }
        }

        void NoteE4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(3033);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(75825); // The other delay times 25
            }
        }

    	void NoteF4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2863);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(71700); // The other delay times 25
            }
        }
	
        void NoteG4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2551);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(63775); // The other delay times 25
            }
        }

        void NoteA4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2272);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(56800); // The other delay times 25
            }
        }

        void NoteB4(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(2024);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(50600); // The other delay times 25
            }
        }

        void NoteC5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1911);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(47775); // The other delay times 25
            }
        }

        void NoteD5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1702);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(42550); // The other delay times 25
            }
        }

        void NoteE5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1516);
                Length--;
            }
            if (Slur == 0) {
            __delay_us(42550); // The other delay times 25
            }
        }

    // Sharps
        void SharpNoteD5(char Length, bool Slur) {
            Length = Length-(Slur*25);
            while(Length != 0) {
                BEEPER = !BEEPER;
                __delay_us(1607);
                Length--;
            }
            if (Slur == 0) {
                __delay_us(40175); // The other delay times 25
                // If this got put in a loop that always runs 25 times that would make it eazy to add pitch to the fuction
            }
        }

int main(void)
{
    // Configure oscillator and I/O ports. These functions run once at start-up.
    OSC_config();               // Configure internal oscillator for 48 MHz
    UBMP4_config();             // Configure on-board UBMP4 I/O devices
	
    // Code in this while loop runs repeatedly.
    while(1)
	{
        // If SW2 is pressed, make a flashy light pattern
        if(SW2 == 0)
        {
            LED3 = 1;
            __delay_ms(100);
            LED4 = 1;
            __delay_ms(100);
            LED5 = 1;
            __delay_ms(100);
            LED6 = 1;
            __delay_ms(100);
            LED3 = 0;
            __delay_ms(100);
            LED4 = 0;
            __delay_ms(100);
            LED5 = 0;
            __delay_ms(100);
            LED6 = 0;
            __delay_ms(100);
        }
        
        // Add code for your Program Analysis and Programming Activities here:
        
        

        // MUSIC starts here
        if(SW5 == 0)
        {
        // Measure 4
            NoteC4(100, 1);
	        NoteD4(100, 1);
	        NoteE4(200, 1);

            NoteG4(200, 1);
            NoteF4(100, 1);
            NoteD4(100, 1);

            NoteE4(100, 1);
            NoteG4(100, 1);
            NoteA4(200, 1);

            NoteG4(400, 1);

        // Measure 5
            NoteC4(100, 1);
	        NoteD4(100, 1);
	        NoteE4(200, 1);

            NoteG4(200, 1);
            NoteE4(100, 1);
            NoteC4(100, 1);

            NoteE4(100, 1);
            NoteC4(100, 1);
            NoteD4(200, 1);

            NoteC4(400, 1);

        // Measure 6
            NoteB3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteB3(100, 1);

            NoteA3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteA3(100, 1);

        // Measure 7
            NoteG3(200, 1);
            NoteC4(100, 1);
            NoteG4(200, 1); // This note is a tie
            NoteC4(100, 1);
            NoteG3(100, 1);

            NoteC4(800, 1);

        // Measure 8
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);

            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);

            NoteG4(200, 1);
            NoteD5(200, 1);
            NoteC5(200, 1);
            NoteA4(200, 1);

        // Measure 9
            NoteF3(200, 1);

            NoteG3(200, 1);
            NoteG4(100, 1);
            NoteA4(100, 1);

            NoteC5(200, 1);
            NoteB4(200, 1);

            NoteG4(400, 1);

            NoteG4(100, 1);
            NoteA4(100, 1);
            NoteC5(200, 1);

        // Measure 10
            NoteF4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);

            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);
            NoteG4(100, 1);

            NoteG4(200, 1);
            NoteD5(200, 1);
            NoteC5(200, 1);
            NoteA4(200, 1);

        // Measure 11
            NoteF4(100, 1);

            NoteG4(100, 1);
            NoteG3(100, 1);

            NoteC4(400, 1);

            NoteF4(100, 1);

            NoteG4(100, 1);
            NoteG3(100, 1);

            NoteC4(400, 1);

        // Measure 12
            NoteF4(100, 1);

            NoteG4(100, 1);
            NoteG3(100, 1);

            NoteB3(1200, 1);

        // Measure 13
            Rest(400);

            SharpNoteD5(200, 0);
            NoteE5(200, 1);

            NoteD5(200, 0);
            NoteE5(200, 1);
            
            NoteC5(300, 1);
            //More slurs here
            NoteC5(100, 1);

            NoteA4(100, 1);
            NoteC5(100, 1);
        }

        // Activate bootloader if SW1 is pressed.
        if(SW1 == 0)
        {
            RESET();
        }
    }
}

/* Program Analysis
